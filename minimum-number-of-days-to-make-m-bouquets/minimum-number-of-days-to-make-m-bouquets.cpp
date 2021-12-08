class Solution {
    bool check(int mid,vector<int> b,int m, int k){
        int flow=0;
        int bouq=0;
        for(int i=0;i<b.size();i++){
            if(b[i]<=mid){
                flow++;
                if(flow==k){
                    bouq++;
                    flow=0;
                }
            }
            else{
                flow=0;
            }
        }
            if(bouq>=m){
                return true;
            }
                return false;
        }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(n<m*k){
            return -1;
        }
        int low=*min_element(bloomDay.begin(), bloomDay.end());
        int high=*max_element(bloomDay.begin(), bloomDay.end());
        
        while(low<high){
            int mid = (low+high)/2;
            if(check(mid,bloomDay,m,k)){
                high=mid;
            }
            else{
                low = mid+1;
            }
            
        }
        return low;
        
    }
};