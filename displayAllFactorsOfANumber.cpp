#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    for(int i=1 ; i<=n; i++){
        a=n/i;
        if(n%i==0){
            cout<<a<<endl;
        }
}

}