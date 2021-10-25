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
    ListNode* helper(ListNode* head, ListNode* temp, int k){
        ListNode* start = head;
        ListNode* fast = head;
        for(int i=0;i<k;i++){
            // if(fast==NULL) return;
            fast = fast->next;
        }
        while(fast!=NULL){
            start = start -> next;
            fast = fast->next;
        }
        
        return start;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        for(int i=0;i<k-1;i++){
            curr= curr->next;
        }
        ListNode* swap1 = curr;
        ListNode* temp;
        ListNode* swap2 = helper(head,temp,k);
        swap(swap1->val,swap2->val);
        
        return head;
        
        
    
        
    }
};