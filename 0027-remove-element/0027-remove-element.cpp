class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=size(nums);
        int k=0;
        for (int i=0;i<=n-1;i++){
          if (nums[i] != val){
            nums[k] = nums[i];
            k++;
                
          }
        }
          return k;


            }
        
};