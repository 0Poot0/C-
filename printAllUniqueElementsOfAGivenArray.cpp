#include<iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count;
    for(int i=0; i<n; i++){
        count=0;
        for(int j=i-1; j>0; j--){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}