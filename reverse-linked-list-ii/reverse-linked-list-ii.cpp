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
    ListNode* reverse(ListNode* head){
        ListNode *prev = NULL;
        ListNode *curr = head;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
public:
    int i=1;
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(left==right)
            return head;
        ListNode* prev = NULL;
        ListNode* revstart = NULL;
        ListNode* revend = NULL;
        ListNode* next = NULL;

            
        ListNode*curr = head;
        while(curr and i <=n){
            if(i<m)
                prev = curr;
            if(i==m)
                revstart = curr;
            if(i==n){
                revend = curr;
                next = curr->next;
            }
            curr=curr->next;
            i++;
        }
        revend->next = NULL;
        
        revend = reverse(revstart);
        
        if(prev)
            prev->next = revend;
        else
            head = revend;
        revstart->next = next;
        return head;
        
    }
};