class Solution {
    int countDigits(int n){
        int sum =0;
        while(n>0){
            // int sum =0;
            int m = n%10;
            sum = sum + m;
            n = n/10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>> hmap;
        for(auto x: nums){
            int ans = countDigits(x);
            hmap[ans].push_back(x);
        }
        
        
        int maxi = -1;
        for(auto y: hmap){
            int n = y.second.size();
            if(n>1){
                sort(y.second.begin(),y.second.end());
                maxi = max(maxi,(y.second[n-2]+y.second[n-1]));
            }
        }
        return maxi;
    }
};