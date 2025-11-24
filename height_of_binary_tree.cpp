Height(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int count=0;
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
           count++;
           if(!q.empty())q.push(NULL);
        }
        else{
            if(root->left)q.push(root->left);
            if(root->right)q.push(root->right);
        }
    }
}