class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> v;
        int n = nums.size();
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for(int i=0;i<k;i++){
            minHeap.push(nums[i]);
        }
        for(int i=k;i<n;i++){
            if(minHeap.top()>nums[i])
                continue;
            else{
                minHeap.pop();
                minHeap.push(nums[i]);
            }
        }
        
        while(minHeap.empty()==false){
            int x = minHeap.top();
            v.push_back(x);
            minHeap.pop();
        }
        
        return v[0];
        
    }
};