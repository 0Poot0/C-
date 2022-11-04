#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i+1]>arr[i]){
            cout<<arr[i+1]<<" ";
        }
        else if(arr[i+1]<arr[i]){
            for(int j=i+1; j<n; j++){
                if(arr[j]>arr[i]){
                    cout<<arr[j]<<" ";
                    break;
                }
            }
        }

    }
    return 0;
}