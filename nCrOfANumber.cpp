#include<iostream>
using namespace std;
int factorial(int num){
    int fac=1;
    for(int i=num; i>0; i--){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int n,r;
    cin>>n>>r;
    int nCr = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<nCr<<endl;

    return 0;
}