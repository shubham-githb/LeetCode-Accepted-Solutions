class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int> diff;
        for(int i=0;i<n;i++){
            int temp = capacity[i]-rocks[i];
            diff.push_back(temp);
        }
        int bag =0;
        sort(diff.begin(),diff.end());
        for(int i=0;i<diff.size();i++){
            if(diff[i]<=additionalRocks){
                additionalRocks -= diff[i];
                bag++;
            }
        }
        return bag;
        
    }
};