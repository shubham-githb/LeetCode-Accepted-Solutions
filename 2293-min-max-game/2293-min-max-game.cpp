// class Solution {
// public:
//     int minMaxGame(vector<int>& nums) {
//         int n = nums.size();
//         if(n==1){
//             return nums[0];
//         }
//         // int ans;
//         vector<int> temp;
//         int ans;
//         for(int i=0;i<n/2;i++){
//             if(i%2==0){
//                 temp.push_back(min(nums[2*i],nums[2*i+1]));
//             }
//             else {
//                 temp.push_back(max(nums[2*i],nums[2*i+i]));
//             }
//         }
        
//         ans = minMaxGame(temp);
//         return ans;
        
//         // return 0;
//     }
// };


class Solution {
public:
    //Use recursion
    int minMaxGame(vector<int>& nums) 
    {
        //base condition 
        if(nums.size()==1)
            return nums[0];
        
        //define new vector newnums which stores min and max values and then again pass to the function
        vector<int> newnums;
        int n = nums.size(), ans;
        
        //iterate till n/2 times
        for(int i=0; i<n/2; i++)
        {
            //if index is even 
            if(i%2==0)
                newnums.push_back(min(nums[2*i], nums[2*i+1]));
            
            //if index is odd
            else
                newnums.push_back(max(nums[2*i], nums[2*i+1]));
        
        }
        
        //pass newnums to the minMaxGame function for next level recursion
        ans = minMaxGame(newnums);
        return ans;        
    }
};