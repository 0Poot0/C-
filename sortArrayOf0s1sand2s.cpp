#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int temp,count,flag;
    temp=flag=count=0;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count++;
        }
        else if(arr[i]==1){
            flag++;
        }
        else{
            temp++;
        }
    }
    for(int i=0; i<count; i++){
        arr[i]=0;

    }
    int a=(flag+count);
    for(int i=count; i<a; i++){
        arr[i]=1;
    }
    for(int i=a; i<n; i++){
        arr[i]=2;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}