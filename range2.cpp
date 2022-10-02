#include<iostream>
using namespace std;
int main(){
    int n, range;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the range "<<endl;
    cin>>range;
    for(int i=1; i<=range; i++){
        cout<<n<<"*"<<range<<"="<<n*i<<endl;

    }
    return 0;
}
