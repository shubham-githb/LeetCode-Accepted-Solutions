/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
 if(root==NULL ||(root->left==NULL && root->right==NULL)) return root;
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
    {
        int size=q.size();
        
        if(size==0) return NULL;
    
        
        while(size--)
        {
            Node* curr=q.front();
            
            q.pop();
            
            
            
            if(curr->left!=NULL)  q.push(curr->left);
            if(curr->right!=NULL)  q.push(curr->right);
            
            if (size > 0)    curr->next=q.front();
            
            else  curr->next=NULL;
        }
        
    }
    
    return root;
    
        
    }
    
};