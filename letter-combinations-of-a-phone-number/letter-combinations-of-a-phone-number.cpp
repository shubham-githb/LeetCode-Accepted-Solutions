class Solution {
public:
    vector<string> ans;
    int n;
     map<int,vector<char>>m;
    vector<string> letterCombinations(string digits) {
        n = digits.size();
        if(n==0){
            return {};
        }
        
        m[2]={'a','b','c'};
        m[3]={'d','e','f'};
        m[4]={'g','h','i'};
        m[5]={'j','k','l'};
        m[6]={'m','n','o'};
        m[7]={'p','q','r','s'};
        m[8]={'t','u','v'};
        m[9]={'w','x','y','z'};
        
        int index =0;
        dfs(index,"",digits);
        return ans;
        
    }
    
    void dfs(int i, string s, string digits){
        if(i==n){
            ans.push_back(s);
        }
        
        for(auto e: m[digits[i]-'0']) {
            s = s+e;
            dfs(i+1,s,digits);
            s.pop_back();
        }
    }
};