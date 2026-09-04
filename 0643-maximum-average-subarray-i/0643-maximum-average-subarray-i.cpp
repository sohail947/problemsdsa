class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        double maxav= -DBL_MAX;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(i>=k){
                sum -= nums[i-k];
            }
            double average = (double)sum/k;
            if(i >= (k-1)){
                maxav = max(maxav, average);
            }
        }
        return maxav;
    }
};