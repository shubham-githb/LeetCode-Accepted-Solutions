 string str;
class Solution {
   
     static bool compare(char c1,char c2){
        return str.find(c1)<str.find(c2);
    }
public:
    string customSortString(string order, string s) {
        str=order;
        sort(s.begin(),s.end(),compare);
        return s;
    }
};