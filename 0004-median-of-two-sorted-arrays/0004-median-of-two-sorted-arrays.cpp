class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        float median;
         int l=(m+n)/2;
        vector<int> ans (m+n);
        int i=0;
        int j=0;
        int k=0;
        while(i<n&&j<m){
            if(nums1[i]>nums2[j]){
                ans[k] = nums2[j];
                    j++;
            }       
            else{
                ans[k]=nums1[i];
                i++;
             }
                k++;
        }
        while(i < n) {
            ans[k++] = nums1[i++];
        }

        while(j < m) {
            ans[k++] = nums2[j++];
        }

        if((m+n)%2==0){
         median = (ans[l-1] + ans[l]) / 2.0;

        }
        else{
            median = ans[l];
        }

      return median;
    }
};