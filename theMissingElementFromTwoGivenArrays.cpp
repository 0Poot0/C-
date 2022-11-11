#include<iostream>
#include<string.h>
using namespace std;
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
int count;
for(int i=0; i<n1; i++){
    count=0;
    for(int j=0; j<n2; j++){
        if(arr1[i]==arr2[j]){
            count++;
        }
    }
    if(count==0){
        cout<<arr1[i];
    }

}
}
