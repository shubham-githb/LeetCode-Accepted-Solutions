class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> res;
        stack<int> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            while(st.empty()==false and st.top()>nums[i] and k<(n-i+st.size())){
                st.pop();
            }
            if(st.size()<k){
                st.push(nums[i]);
            }
        }
        
        while(!st.empty()){
            int x = st.top();
            res.push_back(x);
            st.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;
        
    }
};