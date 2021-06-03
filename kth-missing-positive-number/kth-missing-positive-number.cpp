class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        if(n==0) return k;
        vector<int>present(2001,false);
        for(int i=0;i<n;i++) present[arr[i]]=true;
        int mis=0;
        for(int i=1;i<=2000;i++){
            if(present[i]==false)mis++;
            if(mis==k) return i;
        }
        
        return 0;
    }
};