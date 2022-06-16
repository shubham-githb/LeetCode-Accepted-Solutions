class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double tax =0;
        double prev =0;
        for(auto x: brackets){
            int i = x[0];
            int per = x[1];
            int curr = min(i,income);
            tax = tax+((curr-prev)*per)/100;
            prev=i;
            if(i>=income) break;
        }
        return tax;
    }
};