class Solution 
{
public:
    int nextGreaterElement(int n) 
    {
        std::string s = std::to_string(n);//Converting int to string.
        int i=s.size()-2;
        while(i>=0 && s[i]>=s[i+1])//Finding the first decreasing digit from the right.
        {
            --i;
        }
        if(i==-1)//If nothing is greater.
        {
            return -1;
        }
        std::reverse(s.begin() + i + 1, s.end());
        for (int j = i + 1; j < s.length(); ++j) 
        {
            if (s[j] > s[i]) 
            {
                int t=s[j];
                s[j]=s[i];
                s[i]=t;
                break;
            }
        }
        long next = stol(s);//Converting string to int.
        return next == n || next > INT_MAX ? -1 : next;//Checking the condition, if number is smallest than 32 bit.
    }
};