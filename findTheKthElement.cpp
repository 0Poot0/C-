#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void elements(int arr[],int n,int k){
   sort(arr,arr+n,greater<int>());

   for(int i=0;i<k;i++){
    cout<<arr[i]<<" ";
   }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    elements(arr,n,k);
    return 0;
}