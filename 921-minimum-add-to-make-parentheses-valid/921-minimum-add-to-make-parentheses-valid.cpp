// class Solution {
// public:
//     int minAddToMakeValid(string s) {
//         int n = s.size();
//         stack<char> st;
//         for(int i=0;i<n;i++){
//             if(st.empty()){
//                 st.push(s[i]);
//                 continue;
//             }
//             if(s[i]!=st.top()){
//                 if(s[i]==')' and st.top() == '('){
//                     st.pop();
//                 }
//                 else st.push(s[i]);
//             }
//         }
        
//         return st.size();
//     }
// };

class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        stack<char> stack;
        for(int i=0;i<n;i++){
            if(stack.empty()){
                stack.push(s[i]);
                continue;
            }
            if(s[i]!=stack.top()){
                if(s[i]==')' and stack.top() == '('){
                    stack.pop();
                }
                else stack.push(s[i]);
            }
            
            else
                stack.push(s[i]);
        }
        
        return stack.size();
        
    }
};