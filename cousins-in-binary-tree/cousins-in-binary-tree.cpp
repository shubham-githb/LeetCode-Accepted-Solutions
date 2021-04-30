class Solution {
    int Parentheight(TreeNode* root,int &parent,int n,int h ){
        if(root==NULL)
            return 0;
        if(root->val==n){
            return h;
        }
        parent = root->val;
        int left =  Parentheight(root->left,parent,n,h+1);
        if(left)
            return left;
        parent = root->val;
        int right = Parentheight(root->right,parent,n,h+1);
        return right;
        
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int xParent = 0;
        int xHeight = Parentheight(root,xParent,x,0);
            
        int yParent = 0;
        int yHeight = Parentheight(root,yParent,y,0);
        
        if(yParent!=xParent and xHeight==yHeight)
            return true;
        return false;
        
    }
};