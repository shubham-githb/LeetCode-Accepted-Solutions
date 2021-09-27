class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int s=0;
        int e = n-1;
        
        while(s<n-1 and arr[s]<=arr[s+1]) s++;
        if(s==n-1) return 0;
        
        while(e>=s and arr[e]>=arr[e-1]) e--;
        if(e==0) return 0;
        
        int result = min(n-1-s,e);
        
        int i=0;
        int j=e;
        
        while(i<=s and j<n){
            if(arr[j]>=arr[i]){
                result = min(result,j-i-1);
                i++;
            }
            else{
                j++;
            }
        }
        
        return result;
        
    }
};