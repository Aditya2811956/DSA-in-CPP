#include<iostream>
using namespace std;
class Node{
     public:
     int data;
     Node*next;
     Node*prev;
     Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
     }
};
void print(Node* &head ){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int get_length(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insert_tail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insert_head(Node* &head, int d){
    Node*temp1=new Node(d);
    temp1->next=head;
    head->prev=temp1;
    head=temp1;
}
void insert_pos(Node* &tail,Node* &head,int pos,int d){
     if(pos==1){
        insert_head(head,d);
     }
     else if(pos==get_length(head)+1){
        insert_tail(tail, d);
     }
     else{
        Node* temp=new Node(d);
        Node*temp1=head;
        int c=1;
        while(c<pos-1){
            temp1=temp1->next;
            c++;
        }
        temp->next=temp1->next;
        temp->prev=temp1;
        temp1->next->prev=temp;
        temp1->next=temp;
     }
}
void deletion(Node* &head,int pos){
    if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;

        int c=1;
        while(c<pos){
            prev=curr;
            curr=curr->next;
            c++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1; 
    Node* tail=node1;
    insert_head(head,55);
    insert_tail(tail, 44);
    insert_pos(tail,head,2,77);
    deletion(head,3);
    cout<<get_length(head)<<endl;
    print(head);


    return 0;
}