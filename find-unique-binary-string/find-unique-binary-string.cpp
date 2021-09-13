class Solution {
    string temp;
    bool find(int k,set<string> &set1){
        if(temp.size()==k){
            if(set1.find(temp)==set1.end()){
                return true;
            }
            return false;
        }
        
        temp = temp + "0";
        if(find(k,set1)){
            return true;
        }
        
        temp.pop_back();
        
        temp = temp+'1';
        if(find(k,set1)){
            return true;
        }
        temp.pop_back();
        
        return false;
        
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        
        int n = nums.size();
        int k = nums[0].size();
        
        set<string> set1;
        
        for(int i=0;i<n;i++){
            set1.insert(nums[i]);
        }
        
        temp = "";
        find(k,set1);
        return temp;
    }
};