bool isBST(Node*root, int min , int max){
     //base case
     if(root==NULL){
        return true;
     }
     if(root->val>min && root->val<max){
        bool left=  isBST(root->left, min , root->val);
        bool right=isBST(root->right, root->val, max);
        return left&&right;
     }
     else{
        return false;
     }

}   

return isBST(root, INT_MIN, INT_MAX);