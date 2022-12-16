#include<iostream>
using namespace std;
int fun(int n){
    if(n<2){
        return n;
    }
    return fun(n-1)+fun(n-2);

}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<" "<<fun(i);
    }
    return 0;
}