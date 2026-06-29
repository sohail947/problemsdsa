class Solution {
public:
    int reverse(int x) {
       long long ans=0;
        while (x!=0){
           int  rev =x%10;
            ans= ans*10 + rev;
             x=x/10;
        }
       if (ans==(int)ans){
        return ans;
       }
       return 0;
        
    }
};