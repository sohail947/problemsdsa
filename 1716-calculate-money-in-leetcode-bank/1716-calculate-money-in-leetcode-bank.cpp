class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int mondayvalue=1;
        int currentvalue=mondayvalue;
       for(int day=1;day<=n;day++){
            ans+=currentvalue;
            currentvalue++;
        if(day % 7==0){
            mondayvalue++;
            currentvalue=mondayvalue;
        }
        }
        return ans;
        
    }
};