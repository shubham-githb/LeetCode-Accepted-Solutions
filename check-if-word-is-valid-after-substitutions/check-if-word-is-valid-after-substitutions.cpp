class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                st.push(s[i]);
            }
            else if(s[i]=='b'){
                if(st.empty()==true || st.top()!='a') return false;
                st.push(s[i]);
            }
            else if(s[i]=='c'){
                if(st.empty()==true || st.top()!='b') return false;
                st.pop();
                if(st.empty()==true || st.top()!='a') return false;
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty()==true;
    }
};