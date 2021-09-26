class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n;i++){
            int temp = arr[i]*2;
            for(int j=0;j<n;j++){
                if(i!=j and arr[j]==temp){
                    return true;
                }
            }
        }
        return false;
    }
};


// bool checkIfExist(vector<int>& arr) 
// {
//     unordered_map<int, int> mp;
//     for(int i = 0; i < arr.size(); i++)
//     {

//         if(mp.find(arr[i] * 2) != mp.end())
//             return true;
//         if(arr[i] % 2 == 0 && mp.find(arr[i]/2) != mp.end())
//             return true;
//         mp[arr[i]]++;
//     }
    
//     return false;
// }