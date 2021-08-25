class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        vector<int> v;
        for(int i=1;i<n+1;i++){
            v.push_back(i);
        }
        
        for(int i=0;i<v.size();i++){
            int a = v[i]*v[i];
            for(int j=0;j<v.size();j++){
                int b = v[j]*v[j];
                for(int k=j+1;k<v.size();k++){
                    int c = v[k]*v[k];
                    if(a+b==c) cnt++;
                }
            }
        }
        return cnt;
    }
};