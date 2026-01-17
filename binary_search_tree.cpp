//H.W inorder precessor and inorder succesor see in video number 69 and time - 42:08 
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

//Inorder of BST is always sorted (VVIP)

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

Node* Min(Node* &root ){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* Max(Node* &root ){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

Node* insertIntoBST(Node* &root , int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }

    if(data > root->data){
       root->right=insertIntoBST(root->right, data);
    }
    else{
        root->left=insertIntoBST(root->left, data);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data !=-1){
         insertIntoBST(root,data);
         cin>>data;
    }
}

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

int main(){

    Node * root= NULL;

    cout<<"enter data to create BST"<<endl;
    takeInput(root);

    cout<<"Max of BST "<<Max(root)->data<<endl;
    cout<<"Min of BST "<<Min(root)->data<<endl;

    cout<<"printing the BST"<<endl;
    level_traversal( root);

    root=deleteNode(root,50);

    cout<<endl;
    level_traversal( root);
    return 0;
}
