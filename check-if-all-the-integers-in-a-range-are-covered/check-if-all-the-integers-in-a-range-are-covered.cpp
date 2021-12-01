class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int n = ranges.size();
        // bool flag = false;
        for(int i=left;i<=right;i++){
            bool flag = false;
            int cnt =0;
            for(auto x: ranges){
                if(i>=x[0] and i<=x[1]){
                    flag = true;
                    break;
                }
            }
            if(flag==false) return false;
        }
        return true;
        
    }
};