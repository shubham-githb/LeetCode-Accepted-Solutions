class Solution {

public:
    int minimumOperations(vector<int>& nums) {
        set<int> hset;
        for(auto x: nums){
            if(x!=0){
                hset.insert(x);
            }
        }
        
        return hset.size();
    }
};