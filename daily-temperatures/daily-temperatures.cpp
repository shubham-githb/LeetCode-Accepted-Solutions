class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        stack<pair<int,int>> s;
        s.push({a.back(),a.size()-1});
        a[a.size()-1]=0;
        for(int i = a.size()-2;i>=0;i--){
            while(!s.empty() && a[i]>=s.top().first){
                s.pop();
            }
            if(!s.empty()){
                int t = s.top().second - i;
                s.push({a[i],i});
                a[i] = t;
            }
            else{
                s.push({a[i],i});
                a[i]=0;
            }
        }
        return a;
    }
};
// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& a) {
//         stack<pair<int,int>> s;
//         s.push({a.back(),a.size()-1});
//         a[a.size()-1]=0;
//         for(int i = a.size()-2;i>=0;i--){
//             while(!s.empty() && a[i]>=s.top().first){
//                 s.pop();
//             }
//             if(!s.empty()){
//                 int t = s.top().second - i;
//                 s.push({a[i],i});
//                 a[i] = t;
//             }
//             else{
//                 s.push({a[i],i});
//                 a[i]=0;
//             }
//         }
//         return a;
//     }
// };