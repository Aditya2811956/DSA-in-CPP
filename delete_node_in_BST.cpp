Node* deleteNode(Node * &root, int data){
    //base case 
    if(root==NULL){
        return root;
    }

    if(root->data==data){
        //0 child 
        if(root->left==NULL && root->right==NULL){
           delete root;
           return NULL;
        }
        //1 child 

        //left child
        if(root->right==NULL && root->left!=NULL){
            Node* temp= root->left;
            delete  root;
            return temp;
        }


        //right child
        if(root->right!=NULL && root->left==NULL){
           Node* temp= root->right;
           delete root ;
           return temp;
        }
        //2 child 

        if(root->left!=NULL && root->right!=NULL){
            int mini=Min(root->right )->data; // root ke right me sabse choti value dundo 
            root->data=mini; // uss choti value ko root ki jgah copy krdo 
            root->right=deleteNode(root->right, mini);//then delete the right node of same value 
            return root;

        }
    }

    else if (root->data>data){
        root->left=deleteNode(root->left, data);
        return root;
    }
    else if (root->data<data){
        root->right=deleteNode(root->right, data);
        return root;
    }
}
