#include<iostream>
using namespace std;
int main(){
    int ant[]={2,4,6,7};
    char ch[]="abcde";

    cout<<ant<<endl;
    cout<<ch<<endl;

char *c = &ch[0];
cout<<c<<endl;
    return 0;
}