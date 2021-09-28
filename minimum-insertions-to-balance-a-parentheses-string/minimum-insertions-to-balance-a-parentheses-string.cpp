class Solution {
public:
    int minInsertions(string s) {
       stack<char>S;
        int res=0;
        for(int i=0;i<s.size();)
        {
            if(s[i]=='(')//simply add to stack
            {
                S.push('(');
                i++;
            }
            else if(s[i]==')'&&s[i+1]==')'&&!S.empty())//pop from stack
            {
                S.pop();
                i+=2;
            }
            else if(s[i]==')'&&s[i+1]==')'&&S.empty())
            {
                i+=2;
                res++;
            }
            else if(s[i]==')'&&s[i+1]!=')')
            {
                if(S.empty())
                {
                    res+=2;
                    i++;
                }
                else
                {
                    res++;
                    i++;
                    S.pop();
                }
            }
        }
        while(!S.empty())
        {
            res+=2;
            S.pop();
        }
        return res;
    }
};