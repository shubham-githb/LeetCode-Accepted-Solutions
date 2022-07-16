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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
//         priority_queue<int,vector<int>,greater<int>> mini;
//         for(int i=0;i<lists.size();i++){
//             ListNode* curr = lists[i];
//             while(curr){
//                 mini.push(curr->val);
//                 curr = curr->next;
//             }
//         }
        
//         if(mini.size()==0){
//             return NULL;
//         }
        
//         ListNode* res = new ListNode(mini.top());
//         ListNode* head = res;
//         mini.pop();
//         while(mini.size()>0){
//             res->next = new ListNode(mini.top());
//             res= res->next;
//             mini.pop();
//         }
        
//      return head;
        priority_queue<int,vector<int>,greater<int>> mini;
        for(int i=0;i<lists.size();i++){
            ListNode* curr = lists[i];
            while(curr!=NULL){
                mini.push(curr->val);
                curr=curr->next;
            }
        }
        
        if(mini.size()==0){
            return NULL;
        }
        
        ListNode* ans = new ListNode(mini.top());
        mini.pop();
        ListNode* head = ans;
        
        while(mini.size()>0){
            int x = mini.top();
            // mini.pop();
            ans->next = new ListNode(x);
            ans=ans->next;
            mini.pop();
        }
        
        return head;
    }
};