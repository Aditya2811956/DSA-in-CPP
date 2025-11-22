#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
     int data;
     Node* left;
     Node* right;
     Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
     }
};
Node* build_tree(Node*  root){
    int d;
    cout<<"give the data value"<<endl;
    cin>>d;
      if(d==-1){
        return NULL;
      }
      root=new Node(d);
      cout<<"give value for the left of "<< d <<endl;
      root->left=build_tree(root->left);
      cout<<"give the value for right of the "<< d <<endl;
      root->right=build_tree(root->right);
      return root;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    else{
       //left
       inorder(root->left);
       //node
       cout<<root->data<<" ";
       //right
       inorder(root->right);    
    }
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    else{
        //node
       cout<<root->data<<" ";
       //left
       preorder(root->left);
       //right
       preorder(root->right);    
    }
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    else{
       //left
       postorder(root->left);
       //right
       postorder(root->right);    
    }
    //node
       cout<<root->data<<" ";
}
void level_traversal(Node* root){
    queue<Node* > q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
           Node* temp=q.front();
           q.pop();

           if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
           }
           else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
           }
           if(temp->right){
            q.push(temp->right);
           }
           }

           
    }

}   
int main(){
    Node*root=NULL;
    root=build_tree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout<<"This is how tree looks "<<endl;
    level_traversal(root);
    cout<<endl;
    cout<<"in order traversal is : "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"pre order traversal is : "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"post order traversal is : "<<endl;
    postorder(root);
    
    return 0;
}