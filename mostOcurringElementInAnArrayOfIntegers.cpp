#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;

            }
    if(count>max){
        max=count;
    }

        }

    }
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count==max){
                cout<<arr[i];
                break;
            }
        }
    }


    return 0;
}