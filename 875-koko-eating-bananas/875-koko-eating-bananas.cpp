class Solution {
private:
    bool isValid(vector<int>& piles, int h, int mx){
        int sum = 0;
        
        for(int i = 0; i < piles.size(); i++){
            if(piles[i]%mx == 0){
                sum += piles[i]/mx;
            }else{
                sum += piles[i]/mx + 1;
            }
        }
        
        if(sum > h){
            return false;
        }
        return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(),piles.end());
        int res = -1;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(isValid(piles, h, mid)){
                res = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return res;
    }
};
