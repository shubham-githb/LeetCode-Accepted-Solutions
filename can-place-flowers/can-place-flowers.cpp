class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(n==0) return true;
   
        int sz = f.size();
        if(sz==1 and f[0]==0 and n==1) return true;
        
        for(int i=0;i<sz;i++){
            
            if(f[i]==0){
                //if index is zero just check for next one location
                //if i+1 is not 1 then we can place flower there and reduce n
                if(i==0){
                    if(f[i+1]!=1) {f[i]=1;n--;}
                }
                //if index is last just check for prev one location
                //if i-1 is not 1 then we can place flower there and reduce n
                else if(i==sz-1){
                    if(f[i-1]!=1) {f[i]=1;n--;}
                }
                //if index is in middle just check for both prev and next   location
                //if both are not 1 then we can place flower there and reduce n
                else{
                    if(f[i+1]!=1 && f[i-1]!=1) {f[i]=1;n--;}
                }
            }
        }
        return n<=0;
        
    }
};