class Solution {
public:
    int countCollisions(string d) {
        int l =0;
        int r = d.size()-1;
        while(l<d.size() and d[l]=='L'){
            l++;
        }
        
        while(r>=0 and d[r]=='R'){
            r--;
        }
        
        int ans =0;
        while(l<=r){
            if(d[l++]!='S'){
                ans++;
            }
        }
        
        return ans;
    }
};