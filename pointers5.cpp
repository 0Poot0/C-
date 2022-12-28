#include<iostream>
using namespace std;
int main(){
    int ant[20]={1,3,4,5};
    cout<<ant<<endl;
    cout<<&ant<<endl;
    cout<<&ant[0]<<endl;

    int *p=&ant[0];
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    return 0;
}