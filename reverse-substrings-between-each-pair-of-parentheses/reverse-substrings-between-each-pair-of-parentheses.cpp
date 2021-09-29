class Solution {
  public:
      string reverseParentheses(string s) {
          stack<char> st;
          for(int i=0;i<s.size();i++){
              if(s[i]!=')'){
                  st.push(s[i]);
              }else{
                  string w="";
                  while(!st.empty()&&st.top()!='('){
                      w+=st.top();
                      st.pop();
                  }
                  st.pop();
                  for(int j=0;j<w.size();j++){
                      st.push(w[j]);
                  }
              }
          }
          s.clear();
          while(!st.empty()){
              s+=st.top();
              st.pop();
          }
          reverse(s.begin(),s.end());
          return s;
      }
  };