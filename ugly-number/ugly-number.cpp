class Solution {
public:
    vector<int> primes = {2, 3, 5};
    bool isUgly(int n) {
        if(n<1) return false;
        for(auto p:primes) while(n%p==0) n/=p;
        return n==1;
    }
};