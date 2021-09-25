class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0;
        
        unordered_map<int,int> hmap;
        for(int i=0;i<nums3.size();i++){
            for(int j=0;j<nums4.size();j++){
                int temp=nums3[i]+nums4[j];
                hmap[temp]++;
            }
        }
        
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                auto it = hmap.find(0-nums1[i]-nums2[j]);
                if(it!=hmap.end()){
                    count = count+it->second;
                }
            }
        }        
        
        return count;
    }
};

// int f=0;
//     unordered_map<int,int>m;
    
//     for(auto u:A)
//         for(auto v:B)
//             m[u+v]++;

//     for(auto u:C)
//         for(auto v:D)
//         {
//             auto it=m.find(0-u-v);
//             if(it!=m.end())
//                 f += it->second;
//         }

//     return f;