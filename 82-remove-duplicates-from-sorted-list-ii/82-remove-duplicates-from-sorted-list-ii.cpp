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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummyNode = new ListNode(0,head);
        ListNode *prev = dummyNode;
        
        // ListNode* start = head;
        
        while(head!=NULL){
            if(head->next!=NULL and head->val==head->next->val){
                while(head->next!=NULL and head->val == head->next->val){
                    head=head->next;
                }
                prev->next = head->next;
            }
            
            else{
                prev = prev->next;
            }
            
            head=head->next;
        }
        
        return dummyNode->next;
        
    }
};