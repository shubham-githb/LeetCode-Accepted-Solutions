class Solution {
    void dfs(int num,int n,int k,vector<int> &result){
        if(n==0) {
            result.push_back(num);
            return;
        }
        int last_digit = num%10;
        if(last_digit>=k){
            dfs(num*10+last_digit-k,n-1,k,result);
        }
        if(k>0 and last_digit+k<10){
            dfs(num*10+last_digit+k,n-1,k,result);
        }
        
    }
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> result;
        if(n==0) result.push_back(0);
        for(int i=1;i<10;i++){
            dfs(i,n-1,k,result);
        }
        return result;
    }
};