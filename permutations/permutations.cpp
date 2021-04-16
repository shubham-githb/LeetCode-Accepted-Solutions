class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return {nums};
        
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i++){
            vector<int> v(nums.begin(),nums.end());
            v.erase(v.begin()+i);
            auto res = permute(v);
            
            for(int j=0;j<res.size();j++){
                vector<int>_v = res[j];
                _v.insert(_v.begin(),nums[i]);
                result.push_back(_v);
                
            }
            
            
        }
        
        return result;
        
    }
};