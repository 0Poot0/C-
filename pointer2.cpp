#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *p=&i;
    //cout<<*p+1;

    int t=*p;
    cout<<t<<endl;
    cout<<t+1;
    return 0;
}
