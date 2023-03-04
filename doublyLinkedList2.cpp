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

//Destructor..
 ~Node(){
     int value= this->data;
      if(next!=NULL){
         delete next;
         next=NULL;
      }
      cout<<"Memory freed for values "<<value<<endl;
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
void insertAtHead(Node* &tail, Node* &head, int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail=temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head-> prev = temp;
    head=temp;
    }
}

//Insertion at tail..
void insertAtTail(Node* &tail, Node* &head, int d){
     
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head=temp;
    }
    else{
        Node* node2 = new Node(d);
    tail->next = node2;
    node2->prev = tail;
    tail= node2;
    }
}

//Insertion at any position..
void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    //At head..
     if(position==1){
        insertAtHead(head,tail,d);
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
        insertAtTail(tail,head,d);
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

//Deletion of nodes..
void deleteNode(Node* &head,int position){
    if(position == 1) {
        Node* temp = head;
        temp->next->prev = NULL;
        head= temp ->next;
        temp->next = NULL;
        delete temp;
        }
        
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr->prev= NULL;
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}

//Driver code..
int main(){

    Node* node1=new Node(20);
    Node* head = node1;
    Node* tail = node1;
    print(head);

     insertAtHead(tail,head,10);
     print(head);
     insertAtTail(tail,head,30);
     print(head);

     insertAtPosition(head,tail,3,40);
     print(head);

     deleteNode(head,3);
     print(head);

    // insertAtHead(head,tail,20);
    // print(head);


   // cout<<getLength(head)<<endl;

    return 0;
}