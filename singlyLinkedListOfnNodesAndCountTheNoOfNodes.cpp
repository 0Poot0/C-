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
void insertAtTail(Node* &tail, int data){
    if(tail==NULL){
        Node* node= new Node(data);
        tail= node;
    }
else{
    Node* node2= new Node(data);
tail->next = node2;
node2->next = NULL;
tail= node2;
}
}

//Printing the linked list..
void print(Node* &head){
    reverse(head);
    Node* temp= head;
    while(temp!= NULL){
        cout<<"Data = "<<temp->data<<endl;
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

int main(){
    int num;
    cout<<"Input the number of nodes you want : ";
    cin>>num;
    cout<<endl;

Node* head=NULL;
Node* tail =NULL;

for(int i=0; i<num; i++){
    int k;
    cin>>k;
insertAtHead(head,k);

}
print(head);

}
