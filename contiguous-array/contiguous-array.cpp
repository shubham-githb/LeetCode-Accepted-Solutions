class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        unordered_map<int,int> mymap;
        int longest_subarray = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                sum = sum + -1;
            else
                sum = sum + 1;
            if(sum==0)
            {
                if(longest_subarray<i+1)
                    longest_subarray = i+1;
            }
            else if(mymap.find(sum)!=mymap.end())
            {
                if(longest_subarray<i-mymap[sum])
                    longest_subarray=i-mymap[sum];
            }
            else
                mymap[sum] = i;
        }
        
        return longest_subarray; 
        
    }
};