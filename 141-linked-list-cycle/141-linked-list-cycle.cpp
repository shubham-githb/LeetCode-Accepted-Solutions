/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode* , bool> hmap;
        ListNode* temp = head;
        while(temp!=NULL){
            if(hmap.count(temp)!=0){
                return true;
            }
            else{
                hmap[temp] = true;
                temp = temp->next;
            }
        }
        
        return false;
    }
};