#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is maximum and "<<b<<" is minimum"<<endl;
    }
    else{
        cout<<b<<" is the maximum and "<<a<<" is the minimum"<<endl;
    }
    return 0;
}