class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        int i=0;
        int j=0;
        int ans=0 ;
        int count=0;
        while(j<n){
            if(s[j]=='R'){
                ans = ans+1;
                if(ans==0){
                    count++;
                    j++;
                    i=j;
                }
                else j++;
            }
            else if(s[j]=='L'){
                ans = ans-1;
                if(ans==0){
                    count++;
                    j++;
                    i=j;
                }
                else{
                    j++;
                }
            }
        }
        return count;
    }
};