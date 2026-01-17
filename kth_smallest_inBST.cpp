/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode*  root, vector<int> &arr){
        if(root==NULL){
            return ;
        }
        else{
            inorder(root->left, arr);
            arr.push_back(root->val);
            inorder(root->right, arr);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        inorder( root, arr);
        int x;
        for(int i=0;i<k;i++){
            if(i==k-1){
               x=arr[i];
            }
        }
        return x;
    }
};