class Solution {
public:
    long long smallestNumber(long long nums) {
        string s = to_string(nums);
        string str = "";
        bool neg = false;
        if(s[0]=='-'){
            neg = true;
        }
        
        if(neg==true){
            for(int i=1;i<s.size();i++){
            str = str+s[i];
        }
        sort(str.rbegin(),str.rend());
        }
        
        if(neg==false){
            // int i=0;
            sort(s.begin(),s.end());
                    if(s[0]=='0'){
                int i=1;
                while(i<s.size()){
                    if(s[i]!='0'){
                        swap(s[i],s[0]);
                            break;
                    }
                    i++;
                }
            }
       
        }
        

        
        if(neg) return -stoll(str);
        return stoll(s);
        
    }
};