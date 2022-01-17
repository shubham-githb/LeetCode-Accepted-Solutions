class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> avg(n);
        vector<long long> prefix(n);

        long long sum =0;
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
            prefix[i] = sum;
        }
        
        for(int i=0;i<n;i++){
            if(i - k >= 0 && i + k < n){
                avg[i] = ( prefix[i + k] - (i-k-1>=0 ? prefix[i-k-1] : 0)) / (2 * k + 1) ;       
            }
            else{
                avg[i]=-1;
            }
        }
        
        return avg;
    }
};