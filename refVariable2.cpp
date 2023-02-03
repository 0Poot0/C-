#include<iostream>
using namespace std;
int getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){

    int n=5;
    cin>>n;

    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

int ans=getSum(arr,n);
//delete []arr;

cout<<ans<<endl;
    return 0;
}