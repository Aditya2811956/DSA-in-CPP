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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* nya=new ListNode(-1);
        ListNode* a=nya;
        while(temp1  || temp2){
            if(temp1==NULL){
                 ListNode*temp= new  ListNode(temp2->val);
                a->next=temp;
                a=a->next;
                temp2=temp2->next;
                continue;
            }
            if(temp2==NULL){
                ListNode*temp= new  ListNode(temp1->val);
                a->next=temp;
                a=a->next;
                temp1=temp1->next;
                continue;
            }
            if(temp1->val<=temp2->val){
                ListNode*temp= new  ListNode(temp1->val);
                a->next=temp;
                a=a->next;
                temp1=temp1->next;
            }
            else{
                ListNode*temp= new  ListNode(temp2->val);
                a->next=temp;
                a=a->next;
                temp2=temp2->next;
            }
        }
        return nya->next;
    }
};