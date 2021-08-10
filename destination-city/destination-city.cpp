class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        if(paths.size()==1){
            return paths[0][1];
        }
        
        vector<string> dummy;
        
        for(auto x: paths){
            dummy.push_back(x[0]);
            dummy.push_back(x[1]);
        }
        
        set<string> hset;
        for(int i=0;i<dummy.size();i++){
            hset.insert(dummy[i]);
        }
        
        unordered_map<string,string> hmap;
        
        for(int i=0;i<paths.size();i++){
            hmap[paths[i][0]] = paths[i][1];
        }
        
        
        for(int i=0;i<dummy.size();i++){
            if(hmap.find(dummy[i])==hmap.end()){
                return dummy[i];
            }
        }
        return 0;
    }
};