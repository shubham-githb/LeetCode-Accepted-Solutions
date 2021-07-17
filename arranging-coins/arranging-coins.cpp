class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(n>0){
            n = n-i;
            i++;
        }
        
        if(n==0) return i-1;
        else
            return i-2;
        
    }
};