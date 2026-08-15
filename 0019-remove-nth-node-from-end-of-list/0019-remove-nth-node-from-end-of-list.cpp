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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int count =0;
         ListNode* temp=head;
        while(temp!=NULL){
            count++;
           temp=temp->next;
            }
         if(count==n){
           ListNode* newhead = head->next;
             delete head ;
             return newhead;
         }
        int res = count-n;
        ListNode* ans = head;

        while(res>1){
            ans=ans->next;
            res--;
            }

       ListNode* deletnode = ans->next;
       ans->next = deletnode->next; 
        delete deletnode;
        return head;
        
    }
};