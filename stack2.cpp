#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;

Stack(int size){
this->size=size;
arr=new int[size];
top=-1;
}

void push(int x){
if(top==size-1){
    cout<<"Stack overflow !!!"<<endl;
}
else{
    top++;
    arr[top]=x;
}
}

int pop(){
if(top==-1){
    cout<<"Stack underflow!!!"<<endl;
}
else{
    int res=arr[top];
    top--;
    return res;
}
}

int peek(){
if(top==-1){
    cout<<"STack underflow !!!"<<endl;
}
else{
    return arr[top];
}
}

bool isEmpty(){
if(top==-1){
    return true;
}
else{
    return false;
}
}

};
int main(){
Stack s(5);
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
// if(s.isEmpty()){
//     cout<<"The stack is empty !!! "<<endl;
// }
// else{
//     cout<<"The stack is not empty !!!"<<endl;
// }
cout<<s.isEmpty()<<endl;
    return 0;
}