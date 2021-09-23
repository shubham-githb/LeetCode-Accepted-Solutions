class Solution {
    bool isValid(string s){
        int count[26] = {0};
        for(int i=0;i<s.size();i++){
            if(count[s[i]-'a']==1)
                return false;
            else
                count[s[i]-'a']++;
        }
        return true;
    }
    
public:
    int maxLength(vector<string>& arr) {
        int len =0;
        vector<string> ansList;
        string dummy = "";
        ansList.push_back(dummy);
        
        for(auto str: arr){
            if(!isValid(str)) continue;
            vector<string> currList;
            for(auto candidate: ansList){
                string temp = candidate+str;
                if(isValid(temp)==true){
                    currList.push_back(temp);
                    if(len<temp.size()){
                        len = temp.size();
                    }
                }
                
            }
            for(int i=0;i<currList.size();i++){
                ansList.push_back(currList[i]);
            }
        }
        return len;
        
    }
};