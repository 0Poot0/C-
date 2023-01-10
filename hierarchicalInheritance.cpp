#include<iostream>
using namespace std;

class A{
public:
void walk(){
    cout<<"Walking"<<endl;
}
};

class B:public A{
    public:
    int talk(){
        cout<<"Talking"<<endl;
    }
};

class C: public A{
    public:
    string feel(){
        cout<<"Feeling"<<endl;
    }
};

int main(){

A object1;
object1.walk();

B object2;
object2.walk();

C object3;
object3.feel();
object3.walk();

    return 0;
}
