class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int num5=0;
        int num10=0;
        int num20=0;
        
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                num5++;
            }
            else if(bills[i]==10){
                num10++;
                if(num5>0){
                    num5--;
                }
                else{
                    return false;
                }
            }
            else{
                num20++;
                if(num10>0 and num5>0){
                    num10--;
                    num5--;
                }
                else if(num5>=3){
                    num5=num5-3;
                }
                else{
                    return false;
                }
            }
        }
        
        return true;
    }
};