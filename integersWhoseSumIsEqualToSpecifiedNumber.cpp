#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==key){
                cout<<arr[i]<<","<<arr[j]<<endl;
                count++;
            }
        }
    }
    cout<<"count is: "<<count<<endl;
    return 0;
}
