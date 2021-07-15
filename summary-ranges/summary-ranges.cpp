class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string>range;
        
        for(int i=0;i<n;i++) {
            int start = nums[i];
            
            while(i+1<n and nums[i+1]==nums[i]+1){
                i++;
            }
            if(start!=nums[i]){
                string s ;
                string e;

                s = to_string(start);
                e = to_string(nums[i]);
                s = s + "->" + e;
                 range.push_back(s); 
            }
            else{
                string str = to_string(start);
                range.push_back(str);
            }
            
        }
        
        
        return range;
        
    }
};