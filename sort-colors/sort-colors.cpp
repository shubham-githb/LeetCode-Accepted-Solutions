class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        int lo=0;
        int hi= n-1;
        int mid=0;
        while(mid<=hi)
        {
            switch(a[mid]) {
                case 0: 
                    swap(a[lo],a[mid]);
                    lo++,mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid],a[hi]);
                    hi--;
                    break;
            }
        }
        
    }
};