class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int x=1;
        int y=2;
        int i;
        for(i=3;i,i<n;i++)
        {
            int tmp = y;
            y +=x;
            x=tmp;
            
        }
        return (x+y);
    }
};