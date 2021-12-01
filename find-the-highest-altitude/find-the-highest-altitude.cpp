class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans =0;
        int min =0;
        for(int i=0;i<gain.size();i++){
            min += gain[i];
            ans = max(ans,min);
        }
        
        return ans;
    }
};

// class Solution {
// public:
//     int largestAltitude(vector<int>& gain) {
//         int ans=0,min=0;
//         for(int i=0;i<gain.size();i++){
//             min+=gain[i];
//             ans=ans>min?ans:min;
//         }
//         return ans;
//     }
// };