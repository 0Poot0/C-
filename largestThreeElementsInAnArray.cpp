#include<iostream>
#include<climits>
using namespace std;
void largest(int arr[],int n){
    int first,second,third;
    first= second= third=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third){
            third=arr[i];
        }}
        cout<<"the largest three elements :"<<first<<" "<<second<<" "<<third;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    largest(arr,n);
return 0;
}
