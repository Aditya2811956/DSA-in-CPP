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
    int getLength(ListNode* head){
        ListNode* temp=head;
        int count =0;
        while(temp!=NULL){
             count++;
             temp=temp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int n=getLength(head);
        if(n%2==0){
            ListNode* temp1=head;
            int x=n/2;
            int y=0;
            while(y<x){
                temp1=temp1->next;
                y++;
            }
            return temp1;
        }
        else{
            ListNode* temp2=head;
            int x=n/2;
            int y=0;
            while(y<x){
                temp2=temp2->next;
                y++;
            }
            return temp2; 
        }
    }
};