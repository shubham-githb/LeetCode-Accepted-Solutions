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
    int getDecimalValue(ListNode* head) {
        
        ListNode* curr = head;
        int num = curr->val;
        while(curr->next!=NULL){
            num = num * 2 + curr->next->val;
            curr=curr->next;
        }
        
        return num;
        
    }
};