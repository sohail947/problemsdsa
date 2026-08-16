class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest = nums[nums.size()-1];
        int smallest = nums[0];
        return gcd(smallest,largest);
        
    }
};