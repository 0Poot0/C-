#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            count=0;
            if(arr[i]==arr[j]){
                count++;
            }
        }
            if(count%2!=0){
                cout<<arr[i];
                break;
            }
    }
    return 0;
}