class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(-1);
            }else{
                if(st.top()==-1){
                    st.pop();
                    st.push(1);
                }
                else{
                    int val=0;
                    while(st.top()!=-1){
                        val = val + st.top();
                        st.pop();
                    }
                    st.pop();
                    st.push(val*2);
                }
            }
        }
        int val =0;
        while(st.size()>0){
            int x = st.top();
            val = val+x;
            st.pop();
        }
        return val;
        
    }
};