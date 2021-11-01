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
        ListNode* curr = head;
        int size=0;
        vector<ListNode*>res(k);
        while(curr){
            curr = curr->next;
            size++;
        }
        int nums = size/k;
        int rem = size%k;
        
        curr = head;
        
        for(int i=0;i<k;i++){
            ListNode* temp = curr;
            for(int j=1;j<nums+(i<rem?1:0);j++){
                if(curr){
                    curr=curr->next;
                }
            }
            if(curr){
                    ListNode* next = curr->next;
                    curr->next = nullptr;
                    curr = next;
                }
            res[i] = temp;
            }
        return res;
    }
};