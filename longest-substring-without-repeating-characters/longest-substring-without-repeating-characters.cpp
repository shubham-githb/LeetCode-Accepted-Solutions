class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int> map(256,-1);
        int left =0;
        int right =0;
        int len =0;
        while(right<n)
        {
            if(map[s[right]]!=-1) left = max(map[s[right]]+1,left);
            map[s[right]] = right;
            len = max(len,right-left+1);
            right++;
        }
        
        return len;
    }
};