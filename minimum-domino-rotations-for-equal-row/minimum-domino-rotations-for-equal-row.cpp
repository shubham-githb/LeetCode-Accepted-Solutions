class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int count1=0,count2=0,count3=0,count4=0;
        int nums1 = tops[0];
        int nums2 = bottoms[0];
        
        int n1 = tops.size();
        int n2 = bottoms.size();
        
        for(int i=0;i<n1;i++){
            if(count1!=INT_MAX){
                if(tops[i]==nums1){
                    
                }else if(bottoms[i]==nums1){
                    count1++;
                }else{
                    count1=INT_MAX;
                }
            }
            
            if(count2!=INT_MAX){
                if(bottoms[i]==nums1){
                    
                } else if(tops[i]==nums1){
                    count2++;
                }else{
                    count2=INT_MAX;
                }
            }
        }
        
        for(int i=0;i<n2;i++){
            if(count3!=INT_MAX){
                if(tops[i]==nums2){
                    
                }else if(bottoms[i]==nums2){
                    count3++;
                }else{
                    count3=INT_MAX;
                }
            }
            
            if(count4!=INT_MAX){
                if(bottoms[i]==nums2){
                    
                } else if(tops[i]==nums2){
                    count4++;
                }else{
                    count4=INT_MAX;
                }
            }
        }
        
        int res = min(min(count1,count2),min(count3,count4));
        if(res==INT_MAX){
            return -1;
        }else{
            return res;
        }
        
        
        
        
    }
};