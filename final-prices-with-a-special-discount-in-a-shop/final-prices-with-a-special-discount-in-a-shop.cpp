class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res;
        int n = prices.size();
        for(int i=0;i<n;i++){
            int j;
            for(j=i+1;j<n;j++)
            {
                if(prices[j]<=prices[i]){
                    res.push_back(prices[i]-prices[j]);
                    break;
                }
            }
                if(j==prices.size())
                {
                    res.push_back(prices[i]);
                }
        }
        return res;
    }
};