#include<iostream>
#include<vector>
using namespace std;
class Node{
     public:
     int data;
     Node* right;
     Node* left;
     Node(int data){
        this ->data=data;
        this->right=NULL;
        this->left=NULL;
     }
};

void traverseLeft(Node* root , vector<int> &arr){
    if((root==NULL) || (root->right==NULL && root->left==NULL)){
        return;
    }
    arr.push_back(root->data);
    if(root->left){
         traverseLeft( root->left , arr);
    }
    if(root->right){
         traverseLeft( root->right ,arr);
    }
}


void traverseLeaf(Node* root ,  vector<int>& arr){
    if(root==NULL){
        return;
    }
    if(root->right==NULL && root->left==NULL){
        arr.push_back(root->data);
    }
         traverseLeaf( root->left , arr);
         traverseLeaf( root->right ,arr);
}

void traverseRight(Node*root , vector<int>& arr){
    if((root==NULL) || (root->right==NULL && root->left==NULL)){
        return;
    }
    if(root->right){
         traverseRight( root->right ,arr);
    }
    if(root->left){
         traverseRight( root->left , arr);
    }

    arr.push_back(root->data);
     
}
int main(){
    Node* root= new Node(10);

    root->right=new Node(30);
    root->left= new Node(20);

    root->left->left= new Node(40);
    root->left->right= new Node(50);

    root->right->right= new Node(60);

    vector<int> arr;

    arr.push_back(root->data);       
    //traverse left
    traverseLeft(root->left, arr);

    //traverse leaf
    traverseLeaf( root ,arr);

    //traverse reverse right
    traverseRight(root->right , arr);


    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}