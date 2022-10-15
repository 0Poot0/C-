#include<iostream>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    float r;
    char ch;
    cout<<"Enter the operators :";
    cin>>ch;
    if(ch=='+'){
        r=a+b;
        cout<<r;
    }
    else if(ch=='-'){
        r=a-b;
        cout<<r;
    }
    else if(ch=='*'){
        r=a*b;
        cout<<r;
    }
    else{
        r=a/b;
        cout<<r;
    }

    return 0;
}