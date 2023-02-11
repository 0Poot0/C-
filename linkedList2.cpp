#include<iostream>
using namespace std;

//Creating a Node.
class Node{
    public:
    int data;
    Node* next;
};

//Insertion at the beginning.
void push(Node **head, int Data){

//Make a new node.
Node* node1 = new Node();
//Put data to it.
node1-> data = Data;
//Point the next of the new node to the head of the previous node.
node1-> next = (*head);
//Make the new node the current head node.
(*head)= node1;
}


//Insertion in the middle.
void middle(Node* &head, int position, int data){

    //If the given position is 1 then it becomes insertion at the head case.
    if(position==1){
        push(&head,data);
        return;
    }
    //Make a new Node pointing to the head.
    Node* temp = head;
    //Traverse it uptill the previous position of the current insertion position.
    int count=1;
    while(count<position-1){
        temp=temp-> next;
        count++;
    }

    //creating a node.
    Node* node2 = new Node();
    //Put data to it.
    node2-> data = data;
    //point the next of the new node to the next of the temp node.
    node2->next = temp->next;
    //point the next of temp node to the new node.
    temp->next = node2;
}

//Insertion at the end.
void append(Node ** head,int data){

    Node* node3 = new Node();
    Node* last = *head;
    node3-> data = data;
    node3-> next = NULL;

    if(*head==NULL){
        *head=node3;
    }

    while(last->next !=NULL){
        last= last->next;
    }

    last->next=node3;
}

//Printing aka displaying the list.
void printList(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n= n->next;
    }
}

int main(){
    Node* head = NULL;
    push(&head,6);
    push(&head,7);
    append(&head,8);
    middle(head,2,5);
    push(&head,1);
    middle(head,2,2);
    append(&head,10);
    printList(head);

    return 0;
}