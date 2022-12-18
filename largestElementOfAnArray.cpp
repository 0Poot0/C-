#include<iostream>
using namespace std;
int fun(int ant[],int n){
    if(n==1){
        return ant[0];
    }
    return max(ant[n-1],fun(ant,n-1));
}
int main(){
    int n;
    cin>>n;
    int ant[n];
    for(int i=0; i<n; i++){
        cin>>ant[i];
    }
    int ans=fun(ant,n);
    cout<<ans;
    return 0;
}