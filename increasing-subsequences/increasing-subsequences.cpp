class Solution {
    vector<vector<int> > ans;
public:
    void dfs(vector<int> &num,int id,int v,vector<int> tem,set<vector<int> > &mp){
        if(id==num.size()) return;
        if(tem.size()>=2){
            mp.insert(tem);
        }
        for(int i=id+1;i<num.size();i++){
            if(num[i]>=v){
              //  cout<<num[i]<<" "<<v<<endl;
                tem.push_back(num[i]);
                dfs(num,i,num[i],tem,mp);
                tem.pop_back();
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
       set<vector<int> > st;
        for(int i=0;i<nums.size();i++){
            vector<int> te;
            te.push_back(nums[i]);
            dfs(nums,i,nums[i],te,st);
        }
        for(auto m:st){
            ans.push_back(m);
        }
        return ans;
    }
};