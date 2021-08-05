class Solution {
  int binary_search(vector<pair<pair<int, int>, int>>& sorted, int x){
        int n = sorted.size();
        if(sorted[n-1].first.first < x) return -1;
        
        int l = 0, r = n-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(sorted[mid].first.first >= x) r = mid-1;
            else l = mid+1;
        }
        return sorted[l].second;
    }
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
        vector<pair<pair<int,int>,int>> sorted;
        
        int n = intervals.size();
        for(int i=0;i<n;i++){
            sorted.push_back({{intervals[i][0],intervals[i][1]},i});
        }
        
        sort(sorted.begin(),sorted.end());
        
        vector<int> res(n,-1);
        
        for(int i=0;i<n;i++){
            res[i] = binary_search(sorted,intervals[i][1]);
        }
        
        return res;
        
    }
};