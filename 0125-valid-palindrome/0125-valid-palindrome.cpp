class Solution {
public:
    bool isPalindrome(string s) {
        string t;

        for (char c : s) {
            if (isalnum(c)) {
                t += tolower(c);
            }
        }
         int n=t.size();
         int i =0;
         int j=n-1;
         while(n>0 && i<=j){
            if(t[i]!=t[j]){
                return false;
            }
             i++;
              j--;

         }

       return true;  
        
    }
};