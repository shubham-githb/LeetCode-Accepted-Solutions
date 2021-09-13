class Solution {
    unordered_set<string> st;
    int ans =0;
    void dfs(string &s, int idx){
        if(st.size()>ans) {
            ans= st.size();
        }
        if(idx>=s.size()){
            return;
        }
        string str="";
        for(int i=idx;i<s.size();i++){
            str=str+s[i];
            if(st.find(str)==st.end()){
                st.insert(str);
                dfs(s,i+1);
                st.erase(str);
            }
        }
        
    }
public:
    int maxUniqueSplit(string s) {
        dfs(s,0);
        return ans;
        
    }
};