/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(head==NULL){
            return head;
        }
        
        ListNode* ptr = head;
        int sum =0;
        while(ptr!=NULL){
            sum += ptr->val;
            if(sum==0){
                head = ptr->next;
                sum =0;
            }
            ptr=ptr->next;
        }
        if(head!=NULL){
            head->next =  removeZeroSumSublists(head->next);
            // return head;
        }
        
        return head;
    }
};