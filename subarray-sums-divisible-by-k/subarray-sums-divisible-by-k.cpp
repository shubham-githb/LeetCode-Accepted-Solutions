class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans =0;
        map<int,int> hmap;
        hmap[0] = 1;
        int sum =0;
        int rem =0;
        
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
            rem = sum%k;
            if(rem<0){
                rem +=k;
            }
            if(hmap.find(rem)!=hmap.end()){
                ans += hmap[rem];
            }
            hmap[rem]++;
        }
        return ans;
    }
};