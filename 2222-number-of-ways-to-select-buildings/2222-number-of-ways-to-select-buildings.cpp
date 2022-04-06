class Solution {
public:
    long long numberOfWays(string s) {
        int n = s.size();
        vector<long long> pre1(n,0);
        vector<long long> pre2(n,0);
        
        if(s[0]=='1'){
            pre1[0] = 1;
        }
        
        for(int i=1;i<n;i++){
            pre1[i]=(pre1[i-1]+(s[i]=='1'));  
        }
        
        pre2[0]=(s[0]=='0'); 
        
        for(int i=1;i<n;i++){
            pre2[i]=(pre2[i-1]+(s[i]=='0'));  
        }
        
        long long ans =0;
        
        for(int i=1;i<n-1;i++){
            if(s[i]=='0'){
                ans += (pre1[i-1]*(pre1[n-1]-pre1[i]));
            }
            else{
                 ans += (pre2[i-1]*(pre2[n-1]-pre2[i]));
            }
        }

        return ans;
    }
};