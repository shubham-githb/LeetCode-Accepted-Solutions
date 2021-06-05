class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> setJ(jewels.begin(), jewels.end());
        int res =0;

        

        for(char s: stones){
            if(setJ.count(s)){
                res++;
            }
        }
        
        return res;
        
    }
};