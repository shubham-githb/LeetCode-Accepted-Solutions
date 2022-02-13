class Solution {
    static bool cmp(pair<int, int>& a, pair<int, int>& b)
    {
        return a.second > b.second;
    }
    
public:
    int minimumOperations(vector<int>& nums) {
        map<int, int> even;
        map<int, int> odd;
        int n = nums.size(), ans = 0;
        
        //Base cases
        if(n==1)
            return 0;
        if(n==2)
        {
            if(nums[0] == nums[1])
                return 1;
            else
                return 0;
        }
        
        //iterating over nums to get frequency of elements
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                even[nums[i]]++;
            else
                odd[nums[i]]++;
        }
      
        vector<pair<int, int>> A, B;
        for (auto& it : even)
            A.push_back(it);
        for (auto& it : odd)
            B.push_back(it);
        
        //sorting in descending order to get elements with higher frequency first
        sort(A.begin(), A.end(), cmp);
        sort(B.begin(), B.end(), cmp);
        
        //ne = number of elements at even positions
        //no = number of elements at odd positions
        int ne, no;
        if(n%2)
            ne = n/2 + 1, no = n/2;
        else
            ne = n/2, no = n/2;
        
        int i=0, j=0;
        
        while(i<A.size() && j<B.size())
        {
            if(A[i].first != B[j].first)
            {
                ans += (ne - A[i].second);
                ans += (no - B[j].second);
                return ans;
            }
//check if the even or odd array has the greater frequency number of elements 
            else if((ne - A[i].second) > (no - B[j].second))
                i++;
            else
                j++;
        }
        
        //for nums array like this [2,2,2,2]
        if(A[0].first == B[0].first && A.size()==1 && B.size()==1)
            return (n/2);
        
        //if nothing works, we need to change all the elements of the array
        return n;
    }
};