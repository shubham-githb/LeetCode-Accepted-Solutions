class Solution {
public:
    string reorganizeString(string s) {
        string res = "";
        map<char,int> hmap;
       priority_queue<pair<int, char>> pq;
        for(auto &x: s){
            hmap[x]=hmap[x]+1;
        }
        
        for(auto i: hmap){
            pq.push(make_pair(i.second,i.first));
        }
        
        while(pq.size()>1){
            char mostFreq = pq.top().second;
            pq.pop();
            char nextFreq = pq.top().second;
            pq.pop();
            res = res + mostFreq;
            res = res + nextFreq;
            if(hmap[mostFreq]-1>0){
                hmap[mostFreq]=hmap[mostFreq]-1;
                pq.push(make_pair(hmap[mostFreq],mostFreq));
            }
            if(hmap[nextFreq]-1>0){
                if(hmap[nextFreq]-1>0){
                    hmap[nextFreq]=hmap[nextFreq]-1;
                    pq.push(make_pair(hmap[nextFreq],nextFreq));
                }
            }
            
        }
        
        if(pq.size()){
            char last = pq.top().second;
            if(hmap[last]>1) return "";
            else
                res += last;
        }
        
        return res;
    }
};