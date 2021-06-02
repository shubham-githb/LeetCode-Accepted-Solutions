class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        if(barcodes.size()==1 || barcodes.size()==0){
            return barcodes;
        }
       
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int> hmap;
        
        for(auto x: barcodes){
            hmap[x]+=1;
        }
        
        for(auto i: hmap){
            pq.push(make_pair(i.second,i.first));
        }
        barcodes.clear();
        while(pq.top().first>0){
            auto p1 = pq.top();
            pq.pop();
            if(p1.first>0){
                barcodes.push_back(p1.second);
                p1.first--;
            }
            auto p2 = pq.top();
            pq.pop();
            if(p2.first>0){
                barcodes.push_back(p2.second);
                p2.first--;
            }
            
            pq.push(p1);
            pq.push(p2);
        }
        return barcodes;
    }
};