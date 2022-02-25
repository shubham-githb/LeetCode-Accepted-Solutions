class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            s.push(nums[i]);
        }
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and nums[i]>=s.top()){
                s.pop();
            }
            if(s.empty()==true){
                ans[i] = -1;
            }
            else if(nums[i]<s.top()){
                ans[i] = s.top();
            }
            s.push(nums[i]);
        }
        return ans;
        
    }
};