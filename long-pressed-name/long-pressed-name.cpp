class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(typed.size()<name.size())return false;
        if(name[0]!=typed[0])return false;
        int i=1,j=1;
        while(i<name.size()&&j<typed.size()){
            if(name[i]==typed[j]){
                i++;j++;
            }else if(typed[j]==typed[j-1]){
                j++;
            }else{
                return false;
            }
        }
        while(j<typed.size()){
            if(typed[j]!=typed[j-1])return false;
            j++;
        }
        return i==name.size();
    }
};