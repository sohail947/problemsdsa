class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        vector<int> sub_ans;
        int i, j, k;
        int sum;
        int n = nums.size();
        for(k = 0; k < n; k++){
            i = k + 1;
            j = n - 1;
            if(k > 0 && nums[k] == nums[k -1]) continue;
                 while(i < j){
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    result.push_back({nums[k], nums[i], nums[j]});
                    i++;
                    j--;
                      while(i < j && nums[i] == nums[i - 1]) i++;
                while(i < j && nums[j] == nums[j + 1]) j--;
                }
                else if(sum < 0) i++;
                else j--;
                
              
            }
            
            
           
        }
        return result;
    }
};