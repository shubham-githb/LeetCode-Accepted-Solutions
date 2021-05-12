class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n);
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            s.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            while(s.empty()==false and s.top()<=nums[i]){
                s.pop();
            }
            vec[i] = s.empty()?-1:s.top();
            s.push(nums[i]);
        }
        return vec;
        
    }
};