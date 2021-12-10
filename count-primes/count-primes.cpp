class Solution {
public:
   int countPrimes(int n) {
        if(n<2) return 0;
        int ans=0;
        vector<bool> pp(n,true);
        pp[0]=pp[1]=false;
        for(int i=2;i*i<n;++i) {
            if(pp[i]==true) {
                for(int j=i*i;j<n;j+=i) {
                    pp[j]=false;
                }
            }
        }
        return count(pp.begin(),pp.end(),true);
}
};