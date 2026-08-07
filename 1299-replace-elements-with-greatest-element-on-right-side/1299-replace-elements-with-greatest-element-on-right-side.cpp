class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n);
        int rightmax=-1;
          int j=n-1;
        while(j>=0){
            ans[j] = rightmax;
            rightmax = max(rightmax,arr[j]);
            j--;
        }

        return ans;    
    }
};