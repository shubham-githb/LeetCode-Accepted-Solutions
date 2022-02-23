class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pq.size()<k){
                    pq.push(matrix[i][j]);
                }
                else if(pq.top()> matrix[i][j]){
                    pq.pop();
                    pq.push(matrix[i][j]);
                }
            }
        }
        
        // while(pq.size()!=k){
            // pq.pop()
        
        return pq.top();
        
    }
};