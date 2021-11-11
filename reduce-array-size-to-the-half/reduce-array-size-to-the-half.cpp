class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>um;
        vector<int>v1,v2;
        int n=arr.size();
        int a=n/2;
        for(auto i:arr) um[i]++;
        for(auto it=um.begin();it!=um.end();it++){
            v1.push_back(it->second);      //store  the occurrences in a vector
        }
        sort(v1.begin(),v1.end());          // sort vector because we want first the maximum number of occurrence and then second max and so on
        int i=v1.size()-1,sum=0;      
        while(i>=0){
            sum+=v1[i];
            v2.push_back(v1[i]);     //push the value in another vector so that we can return number of deleted integers
            if((n-sum)>a) i--;      // check if (n-sum)<=n/2 or not   if yes then break the loop
            else break;
        }
        return v2.size();
    }
};





// class Solution {
// public:
//     int minSetSize(vector<int>& arr) {
//         map<int,int>um;
//         vector<int>v1,v2;
//         int n=arr.size();
//         int a=n/2;
//         for(auto i:arr) um[i]++;
//         for(auto it=um.begin();it!=um.end();it++){
//             v1.push_back(it->second);      //store  the occurrences in a vector
//         }
//         sort(v1.begin(),v1.end());          // sort vector because we want first the maximum number of occurrence and then second max and so on
//         int i=v1.size()-1,sum=0;      
//         while(i>=0){
//             sum+=v1[i];
//             v2.push_back(v1[i]);     //push the value in another vector so that we can return number of deleted integers
//             if((n-sum)>a) i--;      // check if (n-sum)<=n/2 or not   if yes then break the loop
//             else break;
//         }
//         return v2.size();
//     }
// };