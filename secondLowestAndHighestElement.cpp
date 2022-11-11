#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int first,second;
    first=second=0;
    for(int i=0; i<n; i++){
        if(arr[i]>first){
            first=arr[i];
        }
        else if(arr[i]<first && arr[i]>second){
            second=arr[i];
        }}
    cout<<"Second highest : "<<second<<endl;

    int ssmall,small;
    small=ssmall=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<small){
            small=arr[i];
        }}
    for(int i=0; i<n; i++){
        if(arr[i]<ssmall && arr[i]!=small){
            ssmall=arr[i];
        }

    }

    cout<<"Second lowest : "<<ssmall<<endl;
    return 0;
}