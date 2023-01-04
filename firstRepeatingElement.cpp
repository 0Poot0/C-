#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int idx[100];
    for(int i=0; i<100; i++){
        idx[i]=-1;
    }
    int minidx= INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[arr[i]!=-1]){
            minidx=min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx<<endl;
    }




    return 0;
}