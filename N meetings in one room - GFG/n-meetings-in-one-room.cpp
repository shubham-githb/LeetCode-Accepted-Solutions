// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    static bool cmp(vector<int>&a, vector<int>& b){
        return a[1]<b[1];
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            res.push_back({start[i],end[i]});
        }
        
        sort(res.begin(),res.end(),cmp);
        int curr =0;
        int ans =0;
        for(int i=0;i<n;i++){
            if(res[i][0]>curr){
                ans++;
                curr = res[i][1];
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends