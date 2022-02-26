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
    struct node {
        int val;
        int index;
    };
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr = head;
        int n =0;
        while(curr!=NULL){
            curr=curr->next;
            n++;
        }
        vector<int> ans(n,0);
        stack<node> st;
        curr = head;
        for(int i=0;i<n;i++){
            while(st.empty()==false and st.top().val< curr->val){
                ans[st.top().index] = curr->val;
                st.pop();
            }
            
            st.push({curr->val,i});
            curr =  curr->next;
            
            
        }
        
        return ans;
    }
};