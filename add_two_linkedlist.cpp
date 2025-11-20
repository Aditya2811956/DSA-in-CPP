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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(-1);
        ListNode*head=ans;
        ListNode*temp1=head;
        int carry= 0;
        while(l1!=NULL || l2!=NULL || carry){
            int v1= l1 ? l1->val : 0;
            int v2= l2 ? l2->val : 0;
            int x=v1+v2+ carry;
            int curr=x%10;
            x/=10;
            carry=x%10;
            temp1->next=new ListNode (curr);
            temp1=temp1->next;
            if(l1){l1=l1->next;}
            if (l2){l2=l2->next;}

        }
        return head->next;
    }
};