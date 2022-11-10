#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    int x;
    cin>>x;
    int arr2[x];
    for(int i=0; i<x; x++){
        cin>>arr2[i];
    }
    int y;
    cin>>y;
    int arr3[y];
    for(int i=0; i<y; y++){
        cin>>arr3[i];
    }
    int i,j,k;
    i=j=k=0;
    cout<<"Commmon elements are: "<<endl;
    while(i<n && j<x && k<y){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            i++; j++; k++;
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
    return 0;
}