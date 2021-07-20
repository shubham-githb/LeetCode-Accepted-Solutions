class Solution {
    static bool compare(string x, string y){
        string xy = x.append(y);
        string yx = y.append(x);
        if(xy.compare(yx)>0) return 1;
        else 
            return 0;
    }
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            str.push_back(to_string(nums[i]));
        }
        
        sort(str.begin(),str.end(),compare);
        
        
        string result = "";
        for(int i=0;i<str.size();i++){
            result = result + str[i];
        }
        
        
        if(result[0]=='0'){
            return "0";
        }else{
            return result;
        }
        
    }
};