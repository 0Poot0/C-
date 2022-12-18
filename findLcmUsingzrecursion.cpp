#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        return gcd(a%b,b);
    }
    else{
        return gcd(a,b%a);
    }
}


int Lcm(int a,int b){
    if(a==0||b==0){
        return 0;
    }
    return (a*b)/gcd(a,b);
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
cout<<Lcm(a,b);
    return 0;
}