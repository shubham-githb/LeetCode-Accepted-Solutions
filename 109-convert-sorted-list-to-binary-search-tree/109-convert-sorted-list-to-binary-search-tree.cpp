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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* helper(vector<int>& v, int s , int e){
        int mid = (s+e)/2;
        if(s>e){
            return NULL;
        }
        TreeNode* node = new TreeNode(v[mid]);
        if(s==e){
            return node;
        }
        node->left = helper(v,s,mid-1);
        node->right= helper(v,mid+1,e);
        return node;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        while(temp!=NULL){
            // temp = temp->next;
            v.push_back(temp->val);
            temp = temp->next;
        }
        return helper(v,0,v.size()-1);
        
    }
};