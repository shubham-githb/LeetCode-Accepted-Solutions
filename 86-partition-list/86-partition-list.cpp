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
    ListNode* partition(ListNode* head, int x) {
        ListNode* biggerHead = new ListNode(0);
        ListNode* smallerHead = new ListNode(0);
        ListNode* big = biggerHead;
        ListNode* small = smallerHead;
        
        while(head!=NULL){
            if(head->val<x){
                small->next = head;
                small = small->next;
            }
            else if(head->val>=x){
                big ->next = head;
                big = big->next;
            }
            head=head->next;
        }
        
        big->next = NULL;
        small->next = biggerHead->next;
        
        return smallerHead->next;
        
    }
};