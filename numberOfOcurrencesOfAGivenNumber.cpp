#include<iostream>
using namespace std;
void search(int arr[],int n,int key){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<count;
}
int main(){
    int arr[8]={5,7,8,8,5,8,7,7};
    int key;
    cin>>key;
    search(arr,8,key);
    return 0;
}