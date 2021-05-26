class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> ht;
        
        vector<int> res;
        
        for(int i=0;i<nums1.size();i++){
            ht[nums1[i]]=1;
        }
        
        for(int j=0;j<nums2.size();j++){
            if(ht[nums2[j]]==1){
                ht[nums2[j]]=2;
            }
        }
        
        for(auto &e : ht){
            if(e.second==2){
                res.push_back(e.first);
            }
        }
        return res;
    }
};