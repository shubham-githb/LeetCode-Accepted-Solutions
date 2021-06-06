class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hmap;
        for(auto i: magazine){
            hmap[i]+=1;
        }
        
        for(auto i: ransomNote){
            hmap[i]=hmap[i]-1;
        }
        
        for(int i=0;i<ransomNote.size();i++){
            if(hmap[ransomNote[i]]<0 )
                return false;
        }
        
        return true;
        
    }
};