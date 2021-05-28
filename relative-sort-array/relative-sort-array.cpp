class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> m;
        for(int i: arr1){
            m[i]++;
        }
        
        vector<int> v;
        
        for(int i=0;i<arr2.size();i++){
            if(m.find(arr2[i])!=m.end()){
                while(m[arr2[i]]!=0){
                    v.push_back(arr2[i]);
                    m[arr2[i]]--;
                }
            }
        }
        
        sort(arr1.begin(),arr1.end());
        
        for(int i=0;i<arr1.size();i++){
            if(find(arr2.begin(),arr2.end(),arr1[i])==arr2.end()){
                v.push_back(arr1[i]);
            }
        }
        
        return v;
        
    }
};