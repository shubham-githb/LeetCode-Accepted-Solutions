class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int n = nums.size();
        for(auto x: queries){
            priority_queue<pair<string,int>> pq;
            for(int i=0;i<n;i++){
                int limit = nums[i].size()-x[1];
            string curr = nums[i].substr(limit,x[1]);
                if(pq.size()<x[0]){
                    pq.push({curr,i});
                }
                else if(pq.top().first>curr){
                    pq.pop();
                    pq.push({curr,i});
                }
            }
            
            ans.push_back(pq.top().second);
        }
        return ans;
    }
};