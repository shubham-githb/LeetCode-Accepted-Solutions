class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int n = suits.size();
        bool flush = false;
        unordered_map<char,int> flushmap;
        for(auto x: suits){
            flushmap[x]++;
        }
        
        for(auto it: flushmap){
            if(it.second==5){
                flush = true;
                break;
            }
        }
        
        if(flush==true){
            return "Flush";
        }
        
        unordered_map<int,int> hrank;
        for(auto x: ranks){
            hrank[x]++;
            if(hrank[x]==3){
                return "Three of a Kind";
            }
        }
        
        for(auto x: hrank){
            if(x.second==2){
                return "Pair";
            }
        }
        
        return "High Card";
        
        
        
        
        
    }
};