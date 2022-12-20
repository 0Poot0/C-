#include<iostream>
using namespace std;
int fun(int arr[],int n){
    static int i;
if(i==n){
    return 0;
}
cout<<arr[i]<<endl;
i++;
fun(arr,n);

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