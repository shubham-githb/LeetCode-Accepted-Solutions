class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        
        int i=0;
        int j = n-1;
        int len = 0;
        while(i<j){
            if(heights[i]<heights[j]){
                len = max(len,heights[i]*(j-i));
                i++;
            }
            else{
                len = max(len,heights[j]*(j-i));
                j--;
            }
        }
        return len;
    }
};