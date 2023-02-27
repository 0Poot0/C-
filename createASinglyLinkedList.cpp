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
    Node* temp= head;
    while(temp!= NULL){
        cout<<"Data = "<<temp->data<<endl;
        temp= temp->next;
    }
    cout<<endl;
}

//Driver code..
int main(){
 Node* head=NULL;
 Node* tail=NULL;

insertAtHead(head,5);
insertAtHead(head,6);
insertAtHead(head,7);
print(head);


    return 0;
}