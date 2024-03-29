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
    void reorderList(ListNode* head) {
        ListNode* res = new ListNode(0);
        ListNode* ans = res;
        
        stack<ListNode*> st;
        
        ListNode* curr = head;
        while(head!=NULL){
            st.push(head);
            head = head->next;
        }
        
        // ListNode* next;
        // ListNode* curr = head;
        int n = st.size();
        
        ListNode* next ;
        for(int i=0;i<n/2;i++){
            next = curr->next;
            curr->next = st.top();
            st.pop();
            curr=curr->next;
            curr->next = next;
            curr=curr->next;
        }
        
        curr->next = nullptr;
    }
};