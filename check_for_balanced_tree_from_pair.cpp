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
    pair<bool,int> Balance(TreeNode* root){
        if(root==NULL){
            pair<bool,int> p=make_pair(true,0);   
            return p;
        }

        pair<bool,int> left= Balance(root->left);
        pair<bool,int> right= Balance(root->right);

        bool l=left.first;
        bool r=right.first;
        bool diff=abs(left.second-right.second)<=1;

        pair<bool,int> ans;
        ans.second=max(left.second,right.second) +1;

        if(l && r && diff){
            ans.first=true;
        }
        else{
            ans.first=false;
        }

        return ans;

    }
    bool isBalanced(TreeNode* root) {
     return Balance(root).first;  
    }
};