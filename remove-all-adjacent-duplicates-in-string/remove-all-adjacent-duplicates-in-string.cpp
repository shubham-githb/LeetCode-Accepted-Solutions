class Solution {
public:
    string removeDuplicates(string S) {
        string result = "";
        stack<char> st;
        int i=0;
        int n = S.size();
        for(int i=0;i<n;i++){
            if(st.empty()==true || S[i]!=st.top()){
                st.push(S[i]);
            }
            else{
                st.pop();
            }
        }
        if(st.empty()){
            return result;
        }
        
        else {
        
            while(st.empty()==false){
                result = st.top() + result;
                st.pop();
            }

        return result;
        }
        
        
    }
};