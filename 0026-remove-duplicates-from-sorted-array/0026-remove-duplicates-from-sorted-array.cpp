class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=size(nums);
        if(n==0) return 0;
         int k=1;
        for (int i=1;i<=n-1;i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
           
            }
            return k;       
    }
};