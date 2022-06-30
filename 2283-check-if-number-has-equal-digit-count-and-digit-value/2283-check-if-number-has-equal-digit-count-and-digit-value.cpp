class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        unordered_map<int,int> hmap;
        for(int i=0;i<n;i++){
            int temp = num[i]-'0';
            hmap[temp]++;
        }
        
        for(int i=0;i<n;i++){
            int temp = num[i]-'0';
            if(temp!=hmap[i]){
                return false;
            }

        }
        
        return true;
        
    }
};