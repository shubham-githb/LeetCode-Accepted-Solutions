class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        string ans = "";
        priority_queue<pair<int,int>> pq;
        int cnt[26] = {0};
        for(auto x: s){
            cnt[x-'a']++;
        }
        for(int i=0;i<26;i++){
            if(cnt[i]>0) pq.push({i,cnt[i]});
        }
        
        while(!pq.empty()){
            int chr1 = pq.top().first;
            int freq = pq.top().second;
            pq.pop();
            if(ans.size()==0 || ans.back()!=(char)(chr1+'a'))
            {
                int times = min(freq,repeatLimit);
                for(int j=0;j<times;j++){
                    ans += (char)(chr1+'a');
                }
                freq = freq - times;
                if(freq)
                {
                    pq.push({chr1,freq});
                }
            }
            else {
                if(pq.size()==0) break;
                // pq.pop();
                int chr2 = pq.top().first;
                int freq2 = pq.top().second;
                pq.pop();
                // int times = min(chr2,freq2);
                ans+= (char)(chr2+'a');
                freq2--;
                if(freq2){
                    pq.push({chr2,freq2});
                }
                // pq.push({chr1,freq1});
                pq.push({chr1,freq});

                
            }
        }
        
        return ans;
    }
};