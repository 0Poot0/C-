#include<iostream>
using namespace std;
int main(){
    int num=5;
    //cout<<"The address of num is "<<&num;
    int *p= &num;
    cout<<"The address is : "<<p<<endl;
    cout<<"The value is : "<<*p<<endl;
    return 0;
}