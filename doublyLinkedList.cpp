#include<iostream>
using namespace std;

//Creation of class..
class Node{
public:
    int data;
    Node* prev;
    Node* next;

//Constructor
Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;

}
};

//Traversal of linked list..
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp-> data<<" ";
        temp=temp-> next;
    }
    cout<<endl;
}

//Insertion at the start..
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head-> prev = temp;
    head=temp;
}

//Insertion at tail..
void insertAtTail(Node* &tail,int d){
    Node* node2 = new Node(d);
    tail->next = node2;
    node2->prev = tail;
    tail= node2;
}

//Insertion at any position..
void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    //At head..
     if(position==1){
        insertAtHead(head,d);
        return;
     }

     Node* temp = head;
     int count = 1;
     while(count<position){
        temp = temp->next;
        count++;
     }
     
     //At tail..
     if(temp->next == NULL){
        //tail = temp->next;
        insertAtTail(tail,d);
        return;
     }
     
     //At any position..
     Node* node3 = new Node(d);
     node3->next = temp->next;
     temp->next->prev= node3;
     temp->next = node3;
     node3-> prev= temp;

}

//Finding out the length of the linked list..
int getLength(Node* head){
 int length=0;
    Node* temp=head;
    while(temp!=NULL){
        length++;
        temp=temp-> next;
}
return length;
}

//Driver code..
int main(){

    Node* node1=new Node(20);
    Node* head = node1;
    Node* tail = node1;
    //print(head);

    insertAtHead(head,10);

    insertAtTail(tail,30);

    insertAtPosition(head,tail,3,40);
    print(head);


   // cout<<getLength(head)<<endl;

    return 0;
}