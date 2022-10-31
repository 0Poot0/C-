#include<iostream>
using namespace std;
void secondLargest(int arr[],int n){
    int first,second;
    first=second=0;
    for(int i=0; i<n; i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second){
            second=arr[i];
        }
    }
        cout<<second;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    secondLargest(arr,n);
    return 0;
}