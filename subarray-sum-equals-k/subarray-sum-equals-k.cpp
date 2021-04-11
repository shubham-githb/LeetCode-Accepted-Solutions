class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = nums.size();
        if(n==0) return 0;
        unordered_map<int,int> hmap;
        int currsum=0;
        int count=0;
        int i=0;
        while(i<n)
        {
            currsum = currsum + nums[i];
            if(currsum==k) count++;
            if(hmap.find(currsum-k)!=hmap.end())
                count = count+hmap[currsum-k];
            hmap[currsum]++;
            i++;
        }
        return count;
    }
};