#include<iostream>
using namespace std;
int main(){
    int count;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}