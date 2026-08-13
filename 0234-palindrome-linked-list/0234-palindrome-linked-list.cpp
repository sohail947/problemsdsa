/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {\
       ListNode* temp = head;
       string str;
       stack<int> st;
       string ptr;
       while(temp){
         str += to_string(temp->val);
         st.push(temp->val);
         temp = temp->next;
       }
       while(!st.empty()){
        ptr += to_string(st.top());
        st.pop();
       } 
       if( ptr==str){
        return true;
       } 
       return false;   
    }
};