class Solution {
public:
bool checkValid(vector<vector<int>>& m) {
        vector<int> x(m.size()),v;
        for(int i=0; i<m.size(); i++){
            x[i] = i+1;
        }
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[0].size(); j++){
                v.push_back(m[i][j]);
            }
            sort(v.begin(),v.end());
            if(v!=x) return false;
            v.clear();
        }
        
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[0].size(); j++){
                v.push_back(m[j][i]);
            }
            sort(v.begin(),v.end());
            if(v!=x) return false;
            v.clear();
        }
        return true;
    }
};