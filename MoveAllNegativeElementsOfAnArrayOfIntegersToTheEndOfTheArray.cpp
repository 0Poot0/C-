#include<iostream>
using namespace std;
void fun(int arr[],int n){
    int count,flag;
    int x=0;
    int y=0;
    count=flag=0;
    int temp[n];
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            count++;
            temp[x]=arr[i];
            x++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            temp[count+y]=arr[i];
            y++;
        }

    }
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    fun(arr,n);

    return 0;
}