// class Solution {
//     int moves(int &x , vector<int>& temp, int& min,vector<int> &nums,int i)
//     {
//         int sum = 0;
//         for(int j=0;j<nums.size();j++){
//             if(i!=j){
//                 int diff = abs(x-nums[j]);
//                 sum+= diff;
//             }
//         }
//         return sum;
//     }
// public:
//     int minMoves2(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> temp;
//         for(int i=0;i<nums.size();i++){
//             int x = nums[i];
//             int min = INT_MAX;
//             int curr = moves(x,temp,min,nums,i);
//             temp.push_back(curr);
//         }
        
//         sort(temp.begin(),temp.end());
//         return temp[0];
        
//     }
// };
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        int median = 0;
        
        if(n%2 == 0){
            
         median =  (nums[n/2-1] + nums[n/2])/2 ;
            
        }else{
            
         median = (nums[n/2]);
            
        }
        
        int count = 0; 
        
        
        
        for(int i=0;i<n;i++){
            
           count += abs(nums[i]-median);
          
            
        }
        
       
        
        return count;
        
    }
};