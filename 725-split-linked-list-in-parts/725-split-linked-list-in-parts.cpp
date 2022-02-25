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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,NULL);
        ListNode* curr = head;
        int size=0;
        while(curr!=NULL){
            size++;
            curr=curr->next;
        }
        
        int len = size/k;
        int remainderLen = size%k;
        ListNode* temp = head;
        ListNode* prev = NULL;
        int i=0;
        
        while(temp and i<k){
            ans[i] = temp;
            for(int j=0;j<len+(remainderLen>0?1:0);j++){
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            i++;
            remainderLen--;
            
        }
        
        return ans;
        
        
    }
};