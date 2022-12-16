#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int fun(int n){
    if(n/10==0){
        return 1;
    }
    return 1+fun(n/10);
}
int main(){
    int n;
    cin>>n;
cout<<"The digit count is: "<<fun(n)<<endl;
    return 0;
}