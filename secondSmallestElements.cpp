#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[1]<<" is the second smallest element in this array.";

    return 0;

}