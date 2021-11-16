class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        int n = nums.size();
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<k;i++){
            pq.push({abs(nums[i]-x),i});
        }
        
        for(int i=k;i<n;i++){
            int diff = abs(nums[i]-x);
            if(pq.top().first>diff){
                pq.pop();
                pq.push({diff,i});
            }
        }
        vector<int> res;
        while(pq.empty()==false){
            auto x = nums[pq.top().second];
            res.push_back(x);
            
            pq.pop();
        }
        
        
        
        sort(res.begin(),res.end());
        return res;
        
    }
};