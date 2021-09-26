class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> copy;
        copy=arr;
         sort(copy.begin(), copy.end());
        int rank =1;
unordered_map<int, int> ranks;
        for (auto num : copy) 
            if (ranks.find(num) == ranks.end()) ranks[num] = rank++;
        
        for(int i=0;i<arr.size();i++){
            arr[i] = ranks[arr[i]];
        }
        
        return arr;
        
    }
};