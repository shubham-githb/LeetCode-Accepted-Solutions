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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> hmap;
        ListNode* curr = head;
        while(curr){
            hmap[curr]++;
            if(hmap[curr]==2){
                return curr;
            }
            curr = curr->next;
        }
        
        return 0;
    }
};