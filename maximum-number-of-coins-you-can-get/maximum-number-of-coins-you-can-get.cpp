class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        int size  = n/3;
        sort(piles.begin(),piles.end());
        int j = n-2;
        int count =0;
        int ans;
        int sum =0;
        while(j>=0){
            sum = sum + piles[j];
            count++;
            if(count==size){
                ans = sum;
                break;
            }
            j=j-2;
        }
        return sum;
    }
};