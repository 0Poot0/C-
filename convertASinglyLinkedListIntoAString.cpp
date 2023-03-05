#include<iostream>
#include<string>
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

//Printing the linked list..
void print(Node* &head){
    reverse(head);
    cout<<"The linked list : "<<endl;
    Node* temp = head;
    string flag;
    while(temp!=NULL){
     flag=to_string(temp->data);
     cout<<flag<<" ";
    //cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}

void lengthOfLinkedList(Node* &head){
    int count=0;
Node*temp = head;
while(temp!=NULL){
count++;
temp=temp->next;
}
cout<<"Total no. of nodes are : "<<count<<endl;
    
}

//Driver code..
int main(){
    
    int nodes;
    cout<<"Input total no. of nodes.. :";
    cin>>nodes;

Node* head=NULL;
Node* tail=NULL;

int num;
    for(int i=1; i<=nodes; i++){
        num;
        cout<<"Input data for node" <<i<<" : ";
        cin>>num;

insertAtHead(head,num);
    }
//print(head);
//lengthOfLinkedList(head);
print(head);

    return 0;
}