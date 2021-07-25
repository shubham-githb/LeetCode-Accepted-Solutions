class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        unordered_map<int,bool> visited;
        int lastIdx[26];
        stack<int> stc;
        string ans ="";
        for(int i=0;i<n;i++){
            visited[i] = false;
        }
        
        for(int i=0;i<n;i++){
            lastIdx[s[i]-'a'] = i;
        }
        
        for(int i=0;i<n;i++){
            int val = s[i]-'a';
            if(visited[val]){
                continue;
            }
            while(!stc.empty() and stc.top()>val and lastIdx[stc.top()]>i) {
                visited[stc.top()]=false;
                stc.pop();
            }
            stc.push(val);
            visited[val] = true;
        }
        
        while(stc.empty()==false){
            ans+= stc.top() + 'a';
            stc.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};