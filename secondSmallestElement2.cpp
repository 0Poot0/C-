#include<iostream>
#include<climits>
using namespace std;
int secSmallest(int arr[],int n){
    int smallest,secsmallest;
    if(arr[0]<arr[1]){
        smallest=arr[0];
        secsmallest=arr[1];
    }
    else{
        smallest=arr[1];
        secsmallest=arr[0];
    }
    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            secsmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secsmallest){
            secsmallest=arr[i];
        }
    }
    return secsmallest;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<secSmallest(arr,n)<<endl;

     return 0;
}