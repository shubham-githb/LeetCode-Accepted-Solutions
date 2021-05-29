class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(2);
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[nums[i]-1]++;
        }
        
        for(int i=0;i<n;i++){
            if(m[i]==2) {
                res[0]=i+1;
            }
            
            else if(!m[i]){
                res[1] = i+1;
            }
        }
                    
        return res;
        
    }
};