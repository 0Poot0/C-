#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int a,b,c;
a=0;
cout<<a<<" ";
b=1;
cout<<b<<" ";

    for(int i=0; i<n; i++){
         c= a+b;
        cout<<c<<" ";

        a=b;
        b=c;

    }

    return 0;
}