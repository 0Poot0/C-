#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=-1;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(i!=0 and i!=n-1){
            temp=arr[i];
            arr[i]=arr[i+1]*arr[i-1];
            cout<<arr[i]<<" ";
            arr[i]=temp;

        }
        else if(i==0){
            temp=arr[i];
            arr[i]=arr[i]*arr[i+1];
            cout<<arr[i]<<" ";
            arr[i]=temp;
        }
        else if(i==n-1){
            temp=arr[i];
            arr[i]=arr[i]*arr[i-1];
            cout<<arr[i]<<" ";
            arr[i]=temp;

        }
    }
}