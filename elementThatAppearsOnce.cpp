#include<iostream>
using namespace std;
int fun(int arr[],int n){
    int count;
    for(int i=0;i<n; i++){
        count=0;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;

            }
            if(count==0){
                return arr[i];
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
    cout<<fun(arr,n);

    return 0;
}