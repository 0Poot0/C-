#include<iostream>
using namespace std;
int main(){
    int mini;
    int store;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mini=arr[0];
    store=0;
    for(int i=0; i<n; i++){
        if(arr[i]<mini){
            mini=arr[i];
            store=i;
        }
    
    }
    cout<<"The array is rotated "<<store<<" times"<<endl;
    return 0;

}