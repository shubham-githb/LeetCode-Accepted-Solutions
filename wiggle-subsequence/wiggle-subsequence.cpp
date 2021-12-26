class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        if(nums.size()==1) return 1;
        if(nums.size()==2){
            if(nums[0]==0 and nums[1]==0){
                return 1;
            }
            else{
                return 2;
            }
        }
        
//         for(int i=1;i<n;i++){
//             if(st.empty()){
//                 if(nums[0]!=0 and nums[i]-nums[i-1]!=0){
//                     st.push(nums[i]-nums[i-1]);
//                 }
//                 else continue;
//             }
//             else{
//                 if((st.top()>0 and nums[i-1]-nums[i]<0) || (st.top()<0 and nums[i]-nums[i-1]>0)){
//                     st.push(nums[i]-nums[i-1]);
//                 }
//             }
//         }
        
//         return st.size()+1;
        for(int i=1;i<nums.size();i++){
		if(st.empty()){
			if(nums[0]!=0 && nums[i]-nums[i-1]!=0)
				st.push(nums[i]-nums[i-1]);
			else
				continue;
		}
		else{
			if((st.top()>0 && nums[i]-nums[i-1]<0)|| (st.top()<0 && nums[i]-nums[i-1]>0))
				st.push(nums[i]-nums[i-1]);
		}
	}
	return st.size()+1;

    }
};