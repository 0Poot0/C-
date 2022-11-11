#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int flag=1;
    for(int i=0; i<n-1; i++){
        if (flag==1){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            cout<<arr[i]<<" ";
        }}
        else{
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
                cout<<arr[i]<<" ";
            }
        
        }
        flag!=flag;
    }
    return 0;
}