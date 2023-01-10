#include<iostream>
using namespace std;

class A{

public:
    void func(){
        cout<<"This is class A"<<endl;
    }
};

class B{

    public:
    void func(){
        cout<<"This is class B"<<endl;
    }
};

class C:public A, public B{

};

int main(){

C object;
object.A::func();
object.B::func();

    return 0;
}