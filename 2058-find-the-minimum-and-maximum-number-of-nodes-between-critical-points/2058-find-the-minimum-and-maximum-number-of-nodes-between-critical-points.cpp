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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp2 = head->next;
        vector<int> v11;
        int i=1;
        while(temp2->next!=NULL){
            if(temp2->val>temp->val and temp2->next->val<temp2->val || temp->val>temp2->val and temp2->val<temp2->next->val){
                v11.push_back(i);
            }
            i++;
            temp2=temp2->next;
            temp = temp->next;
        }
        
        if(v11.size()<2){
            return {-1,-1,};
        }
        
        int minx = INT_MAX;
        for(int i=1;i<v11.size();i++){
            minx = min(minx,v11[i]-v11[i-1]);
        }
        int size = v11.size();
        return {minx,v11[size-1]-v11[0]};
        
    }
};