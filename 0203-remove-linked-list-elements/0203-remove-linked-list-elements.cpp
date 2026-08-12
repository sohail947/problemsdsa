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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val == val){
            ListNode* temp = head;
            head= head->next;
            delete temp;
        }
        if(head==NULL) return NULL;
       ListNode* pre = head;
        while(pre->next!=NULL){
            if(pre->next->val == val){
              ListNode* temp = pre->next;
              pre->next=  pre->next->next;
              delete temp; 
            }
            else{
                pre=pre->next;
            }
        }

        return head;
        
    }
};