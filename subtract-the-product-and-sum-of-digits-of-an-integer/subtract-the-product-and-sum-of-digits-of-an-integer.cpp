class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0;
        int product=1;
        int t;
        while(n){
            t = n%10;
            product *= t;
            sum += t;
            n=n/10;
            
        }
        
        return product-sum;
        
    }
};