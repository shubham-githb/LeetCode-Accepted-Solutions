class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int max_cnt = 0;
        for(int i = 1; i < arr.size() - 1; i++){
            if(arr[i] > arr[i-1] and arr[i] > arr[i+1]){
                //go backward
                int j = i-1, cnt = 3;
                while(j-1 >= 0 and arr[j-1] < arr[j]){
                    cnt++;
                    j--;
                }
                //go forward
                int k = i+1;
                while( k + 1 < arr.size() and arr[k+1] < arr[k]){
                    cnt++;
                    k++;
                }
                max_cnt = max(max_cnt, cnt);
            }
        }
        return max_cnt;
    }
};