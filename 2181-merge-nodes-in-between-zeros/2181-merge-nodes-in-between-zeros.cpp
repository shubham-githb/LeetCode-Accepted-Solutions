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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * res = new ListNode(0);
        ListNode* ret = res;
        int sm = 0;
        head=head->next;
        while(head!=NULL){
            if(head->val!=0){
                sm += head->val;
            }
            else if(head->val==0){
                res->next = new ListNode(sm);
                res=res->next;
                sm =0;
            }
            head=head->next;
        }
        
        return ret->next;
        
    }
};