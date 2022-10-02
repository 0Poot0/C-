//POINTERS...
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int*b=&a ;
    // & address of oprator
    //value at , dereference operator
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<&a<<endl;

    //POINTER TO POINTER
    int**c=&b;
    cout<<c<<endl;
    cout<<&b<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    return 0;
}