class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        
        int n = path.size();
        
        for(int i=0;i<n;i++){
            if(path[i]=='/')
                continue;
            string s ="";
            while(i<n and path[i]!='/')
            {
                s=s+path[i];
                i++;
            }
            i--;
            
            if(s==".")
                continue;
            if(s=="..")
            {
                if(!st.empty()) st.pop();
                continue;
            }
            st.push(s);
        }
        
        if(st.empty())
            return "/";
        
        string result="";
        while(!st.empty())
        {
            result="/" + st.top() + result;
            cout<<st.top()<<"/";
            st.pop();
        }
        cout<<endl;
        return result;
        
    }
};