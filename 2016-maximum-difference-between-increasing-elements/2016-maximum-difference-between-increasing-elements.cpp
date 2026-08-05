class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                     sum=max(nums[j]-nums[i],sum);
                }

            }
        }
        if(sum>0){
            return sum;
        }
        else{
            return -1;
        }
        return -1;
        
    }
};