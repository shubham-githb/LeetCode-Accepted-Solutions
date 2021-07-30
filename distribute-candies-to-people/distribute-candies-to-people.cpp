class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int> ans(n);
        int i=0;
        int val=1;
        
        while(val<=candies){
            if(i==n){
                i=0;
            }
            ans[i] = ans[i]+val;
            candies= candies-val;
            val = val+1;
            i++;
        }
        
        if(candies>0){
            if(i==n) i=0;
            ans[i]=ans[i]+candies;
        }
        return ans;
    }
};