class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> hmap;
        int crosses=0;
        int mx =0;
        for(int i=0;i<wall.size();i++){
            int sum =0;
            for(int j=0;j<wall[i].size()-1;j++){
                sum = sum + wall[i][j];
                hmap[sum]++;
                mx = max(mx,hmap[sum]);
                
            }
        }
        crosses = wall.size()-mx;
        return crosses;
    }
};