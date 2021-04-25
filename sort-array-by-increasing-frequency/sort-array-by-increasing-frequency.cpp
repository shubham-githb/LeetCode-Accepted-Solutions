class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b)
    {
        if(a.first!=b.first) return a.first<b.first;
        else return a.second>b.second;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        map<int,int> hmap;
        for(int i=0;i<n;i++){
            if(hmap.find(nums[i]) == hmap.end()){
                hmap[nums[i]] = 1;
            }else{
                hmap[nums[i]] = hmap[nums[i]]+1;
            }
        }
        vector<pair<int,int>> v;
        for(auto it=hmap.begin(); it!=hmap.end(); it++)
        {
              v.push_back(make_pair(it->second,it->first));
        }
        
        sort(v.begin(),v.end(),cmp);
        
        vector<int> ans;
        
        int m = v.size();
        
        for(int i=0;i<m;i++)
        {
            int temp = v[i].first;
            while(temp--){
                ans.push_back(v[i].second);
            }
        }
        
        return ans;
        
        
        
    }
};