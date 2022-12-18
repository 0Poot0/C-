#include<iostream>
using namespace std;
int prime(int n,int i){
if(i==1){
    return 1;
}
if(n%i==0){
    return 0;
}
return prime(n,i-1);
}
int main(){
    int n; int p;
    cin>>n;
p=prime(n,n/2);
if(p==1){
    cout<<"The number is prime";
}
else{
    cout<<"The number is not prime.";
}
    return 0;
}