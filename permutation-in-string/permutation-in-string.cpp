class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        
        int n = s1.size();
        int m = s2.size();
        
        if(n>m) return false;
        
        int left =0;
        int right =0;
        
        while(right<n){
            hash1[s1[right]-'a'] += 1;
            hash2[s2[right]-'a'] += 1;
            right++;
        }
        
        right = right-1;
        
        while(right<m){
            if(hash1==hash2) return true;
            right = right+1;
            if(right!=m){
                hash2[s2[right]-'a'] += 1;
            }
            hash2[s2[left]-'a'] -= 1;
            left=left+1;
        }
        return false;
        
    }
};