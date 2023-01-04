#include<iostream>
using namespace std;
void fun(int arr1[],int n1,int arr2[],int n2,int arr3[],int n3){
    int i,j,k;
    i=j=k=0;
    while(i<n1 && j<n2 && k<n3){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            i++;j++;k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
}
int main(){
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    int n3;
    cin>>n3;
    int arr3[n3];
    for(int i=0; i<n3; i++){
        cin>>arr3[i];
    }
    fun(arr1,n1,arr2,n2,arr3,n3);
    return 0;
}
    