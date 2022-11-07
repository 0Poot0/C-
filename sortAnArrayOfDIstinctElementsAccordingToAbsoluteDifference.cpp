#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
void fun(int arr[],int n,int key){
    int diff[n];
    for(int i=0; i<n; i++){
        diff[i]=abs(key-arr[i]);
    }
    sort(diff,diff+n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(abs(key-arr[j])==diff[i]){
                cout<<arr[j]<<" ";
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
    int key;
    cin>>key;
    fun(arr,n,key);
    return 0;
}
    
   