class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();

		if (m == 0) return 0;

		int n = matrix[0].size();

		if (n == 0) return 0;

		priority_queue<int> pq;


		for (int i=0; i<m; i++)
			for (int j=0; j<n; j++){
				pq.push(matrix[i][j]);
				if (pq.size() > k)
					pq.pop();
			}

		return pq.top();

	}
};