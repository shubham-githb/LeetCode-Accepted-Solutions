class Solution {
public:
    int wordCount(vector<string>& start, vector<string>& target) {
        unordered_map<string,int> hmap;
        int ans = 0;
        for(auto x: start){
            sort(x.begin(),x.end());
            hmap[x]++;
        }
        
        int n = target.size();
        for(int i=0;i<n;i++){
            string temp = target[i];
            bool f = false;
            for(int j=0;j<temp.size();j++){
                string s = temp;
                s.erase(j,1);
                sort(s.begin(),s.end());
                if(hmap.find(s)!=hmap.end()){
                    f = true;
                    break;
                }
                
            }
            if(f) ans++;
        }
        
        return ans;
        
    }
};