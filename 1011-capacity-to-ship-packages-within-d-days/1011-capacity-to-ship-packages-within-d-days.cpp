class Solution {
    bool solve(int mid, vector<int> &arr,int n, int days){
        int sum  = 0;
        int count = 1;
        for(int i=0;i<n;i++){
            if(sum+arr[i]<=mid){
                sum += arr[i];
            }
            else{
                sum = arr[i];
                count++;
            }
        }
        if(count<=days){
            return true;
        }
        else return false;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum =0;
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            sum += weights[i];
            if(weights[i]>max){
                max = weights[i];
            }
        }
        
        int low = max;
        int high = sum;
        int ans;
        while(low<=high){
            int mid = high+(low-high)/2;
            
            if(solve(mid,weights,n,days)==true){
                ans = mid;
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};