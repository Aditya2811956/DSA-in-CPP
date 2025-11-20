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
    bool isPalindrome(ListNode* head) {
        ListNode*temp=head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        int st=0;
        int end=n-1;
        while(st<=end){
            if(arr[st]!=arr[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};
//There is one more solution to it->
//array ke mid pe jake uske aage ki list ko reverse krdo and  then  start se mid tak and mid se end tak ki list ko compare krvalo