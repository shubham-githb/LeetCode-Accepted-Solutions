class Solution {
    unordered_map<string,int> hmap;
    int count(string s){
        int cnt =0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                cnt++;
            }
        }
        return cnt+1;
    }
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        int n = senders.size();
        for(int i=0;i<n;i++){
            int currWord = count(messages[i]);
            hmap[senders[i]] += currWord;
        }
        int mx =0;
        string ans;
        for(auto x: hmap){
            mx = max(mx,x.second);
        }
        
        for(auto i: hmap){
            if(i.second==mx and i.first>ans){
                ans = i.first;
            }
        }
        
        return ans;
    }
};