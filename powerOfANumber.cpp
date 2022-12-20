#include<iostream>
using namespace std;
int power(int base,int p){
    if(p==0){
        return 1;
    }
    return base*power(base,p-1);
}
int main(){
    int base;
    cin>>base;
    int p;
    cin>>p;
    int ans=power(base,p);
    cout<<ans<<endl;
    return 0;
}