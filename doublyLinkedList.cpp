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
        cout<<temp-> data;
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

    Node* node1=new Node(10);
    Node* head = node1;
    print(head);

    insertAtHead(head,110);
    print(head);

   // cout<<getLength(head)<<endl;

    return 0;
}