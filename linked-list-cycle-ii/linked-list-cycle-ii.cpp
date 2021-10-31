/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow = slow->next;
            if(slow==fast){
                ListNode* p1 = head;
                ListNode* q1 = slow;
                while(p1!=q1){
                    p1=p1->next;
                    q1=q1->next;
                }
                
                return p1;
            }
        }
        
        return NULL;
        
    }
};