#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top1;
    int top2;
public:
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=(size)-1;
    }

    void push1(int x){
        if(top1==(size)/2){
            cout<<"Stack overflow";
        }
        else{
            top1++;
            arr[top1]=x;
        }
        }

    void push2(int x2){
        if(top2==((size)/2)+1){
            cout<<"Stack overflow";
        }
        else{
            top2--;
            arr[top2]=x2;
        }
    }

    int pop1(){
        if(top1==-1){
            cout<<"Stack underflow";
        }
        else{
            int res=arr[top1];
            top1--;
            return res;
        }
    }

    int pop2(){
        if(top2==(size)-1){
            cout<<"Stack underflow";
        }
        else{
            int res2=arr[top2];
            top2++;
            return res2;
        }
    }

   int peek1(){
    return arr[top1];
   }

   int peek2(){
    return arr[top2];
   }

   bool isEmpty1(){
    if(top1==-1){
        return true;
    }
    else{
        return false;
    }
   }

 bool isEmpty2(){
    if(top2==(size)-1){
        return true;
    }
    else{
        return false;
    }
 }

};
int main(){
Stack ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    cout << "Popped element from stack1 is "
         << ": " << ts.pop1() << endl;
    ts.push2(40);
    cout << "Popped element from stack2 is "
         << ": " << ts.pop2() << endl;
    return 0;
}