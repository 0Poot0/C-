#include<iostream>
using namespace std;
int fun(int n){
    if(n==1){
        cout<<n;
        return 0;
    }
    fun(n/2);
     cout<<n%2;
}
int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}