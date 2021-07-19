class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> hmap;
        for(int i=0;i<n;i++){
            hmap[arr[i]]++;
        }
        
        int maxnum = -1;
        for(auto it: hmap){
            if(it.second==it.first){
                maxnum = max(maxnum, it.first);
            }
        }
        
        return maxnum;
      
    }
};