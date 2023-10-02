#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *link;

    Node(int val){
        data=val;
        link=NULL;
    }
};
class stack{
    public:
    Node *head;
    int size;
    stack(){
        head=NULL;
        size=0;
    }

void push(int val){
        Node *temp=new Node(val);
        temp->link=head;
        head=temp;
        size++;
}
int pop(){
    if(head==NULL){
        cout<<"Stack underflow !!!"<<endl;
    }
    else{
        int res;
        Node *ptr=head;
        res=ptr->data;
        head=head->link;
        delete(ptr);
        size--;
        return res;
    }
}

int peek(){
    return head->data;
}

int Size(){
    return size;
}

bool isEmpty(){
    if(head==NULL){
        return true;
    }
    else{
        return false;
    }
}

};

int main(){
stack s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
cout<<s.peek()<<endl;
cout<<"The popped element is "<<s.pop()<<endl;
cout<<s.peek()<<endl;
cout<<"The popped element is "<<s.pop()<<endl;
cout<<s.peek()<<endl;
cout<<s.Size()<<endl;
cout<<s.isEmpty()<<endl;

    return 0;
}