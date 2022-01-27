

// pass by reference string in order to overcome tle in the memoisation

class Solution {
    private :
    int dp[1001][1001];
    int lcs(string &x, string &y, int n, int m)
    {
        if(n==0||m==0)
            return dp[n][m]= 0;
        if(x[n-1]==y[m-1])
        {
         return dp[n][m]=1+lcs(x,y,n-1,m-1);
        }
        if(dp[n][m]!=-1)
            return dp[n][m];
        else{
            return dp[n][m]=max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));
        }
        
    }
    
public:
    int longestCommonSubsequence(string text1, string text2) {
      int n=text1.size();
      int m= text2.size();
      memset(dp,-1,sizeof dp);
      return lcs(text1,text2,n,m);
    }
};