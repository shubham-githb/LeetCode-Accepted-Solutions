class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n = nums.size();
        stack<int> s;
       
        
        for(int i=0;i<n;i++){
            if(nums[i]>0 || s.empty()){
                s.push(nums[i]);
            }
            else{
                while(s.empty()==false and s.top()>0 and s.top()<abs(nums[i])) {
                    s.pop();
                }
                if(!s.empty() and s.top()==abs(nums[i])) {
                    s.pop();
                }
                else{
                    if(s.empty() || s.top()<0){
                        s.push(nums[i]);
                    }
                }
            }
        }
        
      vector<int> res(s.size());
        for(int i = (int)s.size() - 1; i >= 0; i--) {
            res[i] = s.top();
            s.pop();
        }
        return res;
        
        
    }
};