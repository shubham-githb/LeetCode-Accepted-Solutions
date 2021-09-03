class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        int m = s.size();
        int n = t.size();
        
        if(m==0||n==0){
            return 0;
        }
        
        vector<vector<int>> dp(m+1,vector<int>(n+1));
       for(int i=0;i<n;i++)
        {
            dp[i][0] = 0;
        }
        
        for(int j=0;j<m;j++)
        {
            dp[0][j] = 0;
        }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        
        return dp[m][n];
        
    }
};