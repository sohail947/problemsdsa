class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
          vector<int> ans(n,0);
          int poindx=0; int nrgindex=1;
         for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[poindx]=nums[i];
                poindx+=2;
            }
            else{
                ans[nrgindex]=nums[i];
                nrgindex+=2;
            }  
         }

          return ans;
        
    }
};