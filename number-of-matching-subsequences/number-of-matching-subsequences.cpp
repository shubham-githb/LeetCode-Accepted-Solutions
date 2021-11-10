class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=0;
        unordered_map<char,vector<int>> hmap;
        int i=0;
        for(auto x: s){
            hmap[x].push_back(i++);
        }
        
        for(int i=0;i<words.size();i++){
            string curr = words[i];
            int latest = -1;
            for(int j=0;j<curr.size();j++){
                auto it  = upper_bound(hmap[curr[j]].begin(),hmap[curr[j]].end(),latest);
                if(it==hmap[curr[j]].end()) break;
                latest = *it;
                if(j==curr.size()-1) count++;
            }
        }
        return count;
    }
};