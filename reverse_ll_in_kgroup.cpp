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
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base  case simple (jab head null ho yaa k ki vaalue 1 ho taab same list lauta do) 
        if(!head || k==1){
            return head;
        }
        
        //check kr rhe hai ki node ki length k se kam to nhi agar kam hogi to hum reverse nhi krenge 
        ListNode* temp = head;
        int c = 0;
        while (temp!=NULL && c < k) {
            temp = temp->next;
            c++;
        }
        if (c < k) return head;

        
        //yha simple reverse ka code hai
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*forward=NULL;
        int count=0;

        while(curr!=NULL && count<k){
          forward =curr->next;
          curr->next=prev;
          prev=curr;
          curr=forward;
          count++;
        }

        //recursive call hai ye 
        if(head!=NULL){
           head->next=reverseKGroup(forward ,k);
        }

        return prev;
    }
};