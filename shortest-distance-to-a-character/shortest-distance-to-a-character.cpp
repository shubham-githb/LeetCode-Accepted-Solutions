class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        int n = s.size();
        vector<int>pos;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                pos.push_back(i);
            }
        }
        
        for(int i=0;i<n;i++){
            if(s[i]!=c){
                int min_idx=INT_MAX;
                for(int p:pos){
                    min_idx=min(min_idx,abs(p-i));
                }
                ans.push_back(min_idx);
            }
            else{
                ans.push_back(0);
            }
            
        }
        
        return ans;
        
    }
};