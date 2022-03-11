class Solution {
public:
struct cmp{
      bool operator()(vector<int>&a, vector<int>&b){
          if(a[0]==b[0]) return a[1]>b[1];
          return a[0]<b[0];
      }  
    };
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end(),cmp());
        int n = items.size();
        for(int i=1;i<n;i++){
            items[i][1] = max(items[i][1],items[i-1][1]);
        }
        
        vector<int> ans;
        for(auto q: queries){
            int l =0;
            int r = n-1;
            int count =0;
            while(l<=r){
                int mid = l+(r-l)/2;
                if(items[mid][0]<=q){
                    count = items[mid][1];
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};