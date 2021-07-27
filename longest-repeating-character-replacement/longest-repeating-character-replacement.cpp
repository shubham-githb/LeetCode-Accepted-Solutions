class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int start=0;
        int end =0;
        int max_window = 0;
        int maxl = 0;
        
        unordered_map<char,int> count;
        
        for(end=0;end<n;end++){
            count[s[end]]++;
            max_window = max(count[s[end]],max_window);
            if(end-start+1-max_window>k)
            {
                count[s[start]]--;
                start++;
            }
            maxl = max(maxl,end-start+1);
            
        }
        
        return maxl;
        
    }
};