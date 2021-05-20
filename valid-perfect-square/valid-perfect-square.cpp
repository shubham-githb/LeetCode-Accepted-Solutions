#define li long int
class Solution {
public:
    bool isPerfectSquare(int num) {
        li low = 1;
        li high = 100000;
        li mid;
        li ans;
        
        while(low<=high){
            mid = low+(high-low)/2;
            ans = mid*mid;
            if(ans==num)
                return true;
            else if(ans>num){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        return false;
        
        
    }
};