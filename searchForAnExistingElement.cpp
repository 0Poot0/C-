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

void insertInTheMiddle(Node* &head,int data,int position){
    int temp=1;
    int  count=0;
    Node* curr= head;
    Node* node2= new Node(data);
    while(temp!=position-1){
        curr=curr->next;
        temp++;
        //count++;
    }
    node2->next=curr->next;
    curr->next=node2;
}

void deleteNode(Node* &head){
     Node* temp=head;
     head= head->next;
     temp->next= NULL;
     delete temp;
}

void deleteNodeAtPosition(Node* &head, int position){
    Node* curr= NULL;
    Node* temp= head;
    int cnt = 1;
    while(cnt!=position){
        curr=temp;
        temp=temp->next;
        cnt++;
    }
    curr->next= temp->next;
    temp->next=NULL;
    delete temp;
}


void deleteTheTail(Node* &head){
    Node* temp=head;
    Node* curr= NULL;
    int cnt=1;
    while(temp->next!=NULL){
        curr=temp;
temp=temp->next;
    }
    curr->next=NULL;
    delete temp;

}

void search(Node* &head, int element){
    Node* temp=head;
    int cnt=1;
    while(temp->data!=element){
        cnt++;
        temp=temp->next;
    }
    cout<<"Element found at node "<<cnt;
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

//Driver code..
int main(){
 Node* head=NULL;
 Node* tail=NULL;


insertAtHead(head,5);
insertAtHead(head,6);
insertAtHead(head,7);
insertAtHead(head,8);
insertAtHead(head,9);
insertAtHead(head,10);
print(head);
insertInTheMiddle(head,42,3);
print(head);

//deleteNode(head);
print(head);

int element;
cout<<"Input the element to be searched : ";
cin>>element;

//deleteNodeAtPosition(head,2);
//print(head);

//deleteTheTail(head);
//print(head);

search(head,element);

}
