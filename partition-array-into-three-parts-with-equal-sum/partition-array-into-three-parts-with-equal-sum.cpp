// class Solution {
// public:
//     bool canThreePartsEqualSum(vector<int>& arr) {
//         int n = arr.size();
//         int sum =0;
//         for(auto x: arr){
//             sum += x;
//         }
        
//         if(sum%3!=0){
//             return false;
//         }
//         sum = sum/3;
//         int curr =0;
//         int count =0;
//         for(int i=0;i<n;i++){
//             curr += arr[i];
//             if(curr==sum){
//                 ++count;
//                 curr =0;
//             }
//         }
        
//         return curr>=3;
        
//     }
// };
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) { 
        
        int sum = 0; 
        
        for (int i : arr) 
            sum += i; 
        
        if (sum % 3 != 0) { 
            return false;
        } 
        
        sum /= 3;   
        
        int partition = 0, currentSum = 0; 
        
        for (int i = 0; i < arr.size(); i++) { 
            
            currentSum += arr[i]; 
            
            if (currentSum == sum) { 
                ++partition; 
                currentSum = 0;
            }
        } 
        
        return partition >= 3; 
    }
};