class Solution {
    bool isValid(int l, int r)
    {
        if(l==r || (l>='A' && l<='Z' && r==l+32)
          || (r>='A' && r<='Z' && l==r+32))
            return true;
        return false;
    }
public:
    bool isPalindrome(string s) {
        vector<char> vec;
        int r = s.size();
        if(r==0) return true;
        int i=0;
        while(i<r)
        {
             if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                vec.push_back(s[i]);
            i++;
        }
        
        int left=0;
        int right = vec.size()-1;
        
        while(left<right)
        {
            if(isValid(vec[left],vec[right])==false)
                return false;
            left++;
            right--;
        }
        
        return true;
        
        
       
        
               
    }
};