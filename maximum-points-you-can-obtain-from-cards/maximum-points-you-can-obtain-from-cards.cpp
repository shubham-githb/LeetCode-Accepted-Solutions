class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum =0;
        int n = cardPoints.size();
        for(int i=0;i<n;i++){
            sum = sum + cardPoints[i];
        }
        
        if(k==cardPoints.size()){
            return sum;
        }
        
        int ans =0;
        int window =0;
        for(int i=0;i<n-k-1;i++){
            window = window + cardPoints[i]; 
        }
        
        for(int i=n-k-1;i<n;i++){
            window = window + cardPoints[i] ;
            ans = max(ans,sum-window);
            window -= cardPoints[i-(n-k-1)];
        }
        
        return ans;
        
    }
};