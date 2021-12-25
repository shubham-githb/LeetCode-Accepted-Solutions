class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
         sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b){return a[1] > b[1];});
        int totsum =0;
        for(int i=0;i<n;i++){
            int boxes = boxTypes[i][0];
            int units = boxTypes[i][1];
            if(truckSize>=boxes){
                truckSize -= boxes;
                totsum += boxes*units;
            }
            else{
                totsum += (truckSize)*(units);
                break;
            }
        }
        
        return totsum;
    }
};