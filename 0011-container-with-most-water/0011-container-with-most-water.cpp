class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int area;
        int width;
        int maxarea=0;
        while( i < j ){
            width=j-i;
            if(height[i] < height[j]){
                area=  height[i]*width;
                maxarea = max(maxarea, area);
                i++;
                
            }
            else{
                area =  (height[j])* width ;
                maxarea = max(maxarea, area);
                j--;
                
            }
        }
        return maxarea;
        
    }
};