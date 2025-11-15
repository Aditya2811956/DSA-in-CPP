#include<iostream>
using namespace std;
class Node{
      public:
      int data;
      Node* next;
      Node(int d){
        this->data=d;
        this->next=NULL;
      }
};
void insert_node( Node* &tail , int element , int d ){
    if(tail==NULL){
      Node* newNode=new Node(d);
      tail=newNode;
      newNode->next=newNode;
    }
    else{
      Node*curr=tail;
      while(curr->data != element){
            curr=curr->next;
      }
      Node*temp=new Node(d);
      temp->next=curr->next;
      curr->next=temp;
    }
}
void print(Node* tail){
  Node* temp=tail;
  do{
     cout<<temp->data<<" ";
     temp=temp->next;
  }while(temp!=tail);
}
int main(){
    Node* tail=NULL;
    insert_node(tail,3,77);
    insert_node(tail,77,87);
    insert_node(tail,87,89);
    print(tail);
    return 0;
}