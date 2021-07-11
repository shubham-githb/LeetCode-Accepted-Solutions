class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats=0;
        sort(people.begin(),people.end());
        int n = people.size();
        int i=0;
        int j=n-1;
        
        while(i<=j){
            if(people[i]+people[j]<= limit)
                i++;
            j--;
            boats++;
        }
        
        return boats;
    }
};