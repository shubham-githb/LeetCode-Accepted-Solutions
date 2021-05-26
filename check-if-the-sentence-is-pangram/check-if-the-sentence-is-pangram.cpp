class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length();
        vector<bool> mark(26,false);
        
        int index;
        
        for(int i=0;i<n;i++){
            index = sentence[i]-'a';
            mark[index]=true;
        }
        
        for(int i=0;i<=25;i++)
            if(mark[i]==false)
                return false;
        return true;
        
    }
};