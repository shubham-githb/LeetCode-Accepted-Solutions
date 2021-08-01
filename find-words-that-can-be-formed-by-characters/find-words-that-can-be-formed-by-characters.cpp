class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charfreq(26,0);
        bool canform = true;
        int count = 0;
        for(auto ch: chars){
            charfreq[ch-'a']++;
        }
        
        for(auto word : words){
            vector<int> wordfreq(26,0);
            for(auto ch: word){
                wordfreq[ch-'a']++;
            }
            
            for(int i=0;i<charfreq.size();i++){
                if(wordfreq[i] > charfreq[i]){
                    canform = false;
                    break;
                }
                else canform = true;
            }
            
            if(canform==true){
                count = count+word.size();
            }
        }
        
        return count;
    }
};