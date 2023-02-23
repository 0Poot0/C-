#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

//Constructor..
Node(int data){
    this->data = data;
    this-> next = NULL;
    cout<<"Node created.."<<endl;
}

//Destructor..
~Node(){
    int value = this->data;
    if(this->next!=NULL){
        delete next;
        next = NULL;
    }
    cout<<"Memory is free for node with data.."<<value<<endl;
}
};

void insertNode(Node* &tail, int element, int data){
    if(tail==NULL){
        Node* node1= new Node(data);
        tail= node1;
        node1->next=node1;
    }
    else{
        Node* curr = tail;
        while(curr->data!=element){
             curr=curr->next;
        }

        Node* node2 = new Node(data);
        node2->next = curr->next;
        curr->next = node2;
    }
}

void print(Node* tail){
    Node* temp= tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!= temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"Null list !!"<<endl;
        return;
    }
    else{
        Node* prev = tail->next;
        Node* curr = prev->next;
        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }
        if(curr->data==value){
            prev->next=curr->next;
            if(tail==curr){
                tail=prev;
            }
            if(curr==prev){
                tail=NULL;
            }
            curr->next= NULL;
            delete curr;
        }
    }
}

int main(){

Node* tail=NULL;
insertNode(tail,5,2);
print(tail);

insertNode(tail,2,3);
print(tail);

insertNode(tail,3,4);
print(tail);

insertNode(tail,4,5);
print(tail);

insertNode(tail,5,6);
print(tail);

deleteNode(tail,3);
print(tail);

deleteNode(tail,2);
print(tail);

    return 0;
}