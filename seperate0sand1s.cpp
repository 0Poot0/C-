#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ctr=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            ctr++;
        }
    }
    for(int i=0; i<ctr; i++){
        arr[i]=0;
    }
    for(int i=ctr; i<n; i++){
        arr[i]=1;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}