#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node* next;
     Node (int data){
        this->data=data;
        this->next=NULL;
     }
};
void insert_head(Node* &head,int d){
    Node* temp= new  Node(d);
    temp->next=head;
    head = temp;
}
void insert_tail(Node* &tail,int d){
      Node* temp=new Node(d);
      tail->next=temp;
      tail=temp;
}
void insert_middle(Node* &head,int pos , int d){
    if(pos==1){
        insert_head(head,d);
        return;
    }
    Node* temp= head;
    int c=1;
    while(c<pos-1){
        temp=temp->next;
        c++;
    }
    Node* temp1=new Node(d);
    temp1->next=temp->next;
    temp->next=temp1;

}
void delete_node(Node* &head , int pos){
    Node*temp=head;
    if(temp==NULL&& temp->next==NULL){  
        return;
    }
    int c=1;
    if(pos==1){
        Node*a=head;
        head=head->next;
        delete a;
        return;
    }
    while(c<pos-1){
          temp=temp->next;
          c++;
    }
    Node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
    
}
void print(Node*&head){
    Node* temp= head;
    while(temp!=NULL){
          cout<<temp->data<<" ";
          temp=temp->next;
    }

    cout<<endl;

}
int main(){
     Node* node1= new Node(10);
     Node* head=node1;
     Node* tail=node1;
     insert_head(head,10);
     insert_head(head,12);
     insert_tail(tail,15);
     insert_middle(head, 5, 55);
     delete_node(head , 2);
     print(head);
    return 0;
}