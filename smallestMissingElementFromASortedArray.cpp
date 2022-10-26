#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=i){
            cout<<"The smallest missing element is "<<i;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"The missing element is "<<n;
    }

    return 0;
}