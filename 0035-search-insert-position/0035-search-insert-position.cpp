class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid,n=nums.size() ;
        int low=0,high=n-1;
        while(low<=high){
            mid=(low+high)/2;
            if(target<nums[mid]){
             high=mid-1;}
            else if(target>nums[mid]){
                low=mid+1;}

             else {
                 return mid;
                }
        }
        return low;

        
    }
};