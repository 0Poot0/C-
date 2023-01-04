#include<iostream>
using namespace std;
int bsearch(int arr[],int n){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        for(int i=0; i<n; i++){
            if(arr[mid]!=i && arr[mid-1]==i){
                return i;

            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    return 0;
}