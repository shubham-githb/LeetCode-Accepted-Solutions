class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> hmap;

        int n = grid.size();
        for(int i=0;i<n;i++){
            hmap[grid[i]]++;
        }
        int ans =0;
        for(int i=0;i<grid[0].size();i++){
            vector<int> v;
            for(int j=0;j<n;j++){
                v.push_back(grid[j][i]);
            }
            if(hmap[v]>0){
                ans+=hmap[v];
            }
        }
        return ans;
    }
};