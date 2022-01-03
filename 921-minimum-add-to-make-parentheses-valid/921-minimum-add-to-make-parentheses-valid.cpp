class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.empty()==true){
                st.push(s[i]);
                continue;
            }
            if(s[i]!=st.top()){
                if(s[i]==')' and st.top()=='('){
                    st.pop();
                }
                else st.push(s[i]);
            }
            else{
                st.push(s[i]);
            }
        }
        
        return st.size();
    }
};
