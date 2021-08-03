class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
      
        vector<int> answer(B.size());
        priority_queue<pair<int, int>>  orderedB;
        
        for(int i = 0; i < B.size(); i++){
            orderedB.push({B[i], i});
        }
        
        sort(A.begin(), A.end(), greater<int>());
        int i = 0, j = B.size()-1;
        
        while(!orderedB.empty()){
            auto curr = orderedB.top();
            orderedB.pop();
            
            if(A[i] > curr.first)
                answer[curr.second] = A[i++];
            else
                answer[curr.second] = A[j--];
        }
        
        return answer;
    }
};