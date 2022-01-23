class Solution {
    int solve(int n, vector<int> &t){
        if(n<=1) return 1;
        if(t[n]!=-1) return t[n];
        else return t[n] = solve(n-1,t)+solve(n-2,t);
    }
public:
    int climbStairs(int n) {
        if(n<=1) return 1;
        vector<int> t(n+1,-1);
        return solve(n,t);
        
    }
};