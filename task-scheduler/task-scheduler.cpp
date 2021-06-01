class Solution {
public:
    int leastInterval(vector<char>& nums, int n) {
    
        
        unordered_map<char,int> hmap;
        for(auto x: nums){
            hmap[x]=hmap[x]+1;
        }
        
        priority_queue<int> pq;
        
        for(auto i: hmap) {
            pq.push(i.second);
        }
        
       
        
        int result =0;
        
        while(!pq.empty()){
           vector<int> temp;
            int time =0;
            for(int i=0;i<n+1;i++)
            {
                if(pq.empty()==false){
                    auto x = pq.top();
                    temp.push_back(x-1);
                    pq.pop();
                    time++;
                }
            }
            for(auto t: temp)
                if(t) pq.push(t);
           if(pq.empty()){
               result = result+ time;
           }else{
               result+= n+1;
           }
            
            
        }
        return result;
           
    }
};