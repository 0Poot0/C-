#include<iostream>
using namespace std;

//Creating the node..
class Node{
    public:
    int data;
    Node* next;

//Constructor..
Node(int data){
    this-> data= data;
    this-> next= NULL;
}

//Destructor..
~Node(){
     int value = this-> data; 
     if(this->next!= NULL){
        delete next;
        this-> next= NULL;
        cout<<"Destructor called.."<<value<<endl;
     }
}
};

//Inserting at head..
void insertAtHead(Node* &head, int data){
    if(head==NULL){
        Node* node= new Node(data);
        head= node;
        return;
    }
   else{
    Node* node1= new Node(data);
   node1-> next = head;
   head= node1;
   }
}

//Inserting at tail..
void insertAtTail(Node* &tail,Node* &head, int data){
    if(tail==NULL){
        Node* node= new Node(data);
        tail= node;
    }
else{
    Node* node2= new Node(data);
tail->next = node2;
node2->next = head;
tail= node2;
}
}

//Printing the linked list..
void print(Node* &head){
    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}


void reverse(Node* &head){
    Node* curr= head;
    Node* next = head;
    Node* prev = NULL ;
    //Node* temp3= tail;
    while(curr!=NULL){
    next= curr->next;
    curr->next= prev;
    prev=curr;
    curr=next;
    }
    head=prev;


}
//Driver code..
int main(){
 Node* head=NULL;
 Node* tail=NULL;

insertAtHead(head,3);
insertAtHead(head,5);
insertAtHead(head,6);
insertAtHead(head,7);
print(head);
reverse(head);
print(head);


    return 0;
}