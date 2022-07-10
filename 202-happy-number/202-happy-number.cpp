class Solution {
    int helper(int n){
        int sum =0;
        while(n!=0){
            int rem = n%10;
            sum = sum + rem*rem;
            n = n/10;
        }
        
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_map<int,int> hmap;
        hmap[n]++;
        while(n!=1 and hmap[n]!=2){
            n = helper(n);
            hmap[n]++;
        }
        
        if(n==1){
            return true;
        }
        
        
        return false;
        
    }
};