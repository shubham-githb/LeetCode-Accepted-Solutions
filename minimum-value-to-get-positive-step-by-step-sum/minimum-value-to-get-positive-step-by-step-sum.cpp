class Solution {
public:
    int minStartValue(vector<int>& nums) {
    int sum =0;
    int negsum = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        negsum = min(negsum,sum);
    }
        if(negsum>=0){
            return 1;
        }
        else{
            return abs(negsum)+1;
        }
        
        
        
        // return start;
        
        
    }
};

// class Solution {
// public:
//     int minStartValue(vector<int>& nums) {
//         int sum=0,negsum=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             sum+=nums[i];
//             negsum=min(negsum,sum);
//         }
//         if(negsum>=0)
//             return 1;
//         else
//             return abs(negsum)+1;
//     }
// };