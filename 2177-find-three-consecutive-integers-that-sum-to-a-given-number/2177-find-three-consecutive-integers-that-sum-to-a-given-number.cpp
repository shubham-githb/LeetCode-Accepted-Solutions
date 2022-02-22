class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> temp;
        if(num%3!=0) return temp;
        long long mid = num/3;
        for(long long i=mid-1;i<=mid+1;i++){
            temp.push_back(i);
        }
        return temp;
    }
};