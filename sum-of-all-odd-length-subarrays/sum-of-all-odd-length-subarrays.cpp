class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int result =0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int end = i+1;
            int start = n-i;
            int total = end*start;
            int odd = total/2;
            if(total%2==1){
                odd = odd+1;
            }
            result = result + odd*arr[i];
        }
        return result;
    }
};