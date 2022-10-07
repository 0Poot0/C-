#include<iostream>
using namespace std;
int factorial(int num){
    int fac =1;
    for(int i =num; i>0; i--){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int n;
    cin>>n;
    int factorial_function = factorial(n);
    cout<<factorial_function<<endl;
    return 0;
}