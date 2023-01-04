#include<iostream>
using namespace std;
int binary_rec(int ant[],int n,int s,int key){
    if(s>n){
        return 0;
    }
    else{
        int mid=(s+n)/2;
        if(key==ant[mid]){
            return mid;
        }
        else{
            if(
                key>ant[mid]
            ){
                return binary_rec(ant,n,mid+1,key);
            }
            else{
                return binary_rec(ant,s,mid-1,key);
            }
        }
    }

}
int main(){
    int n;
    cin>>n;
    int ant[n];
    for(int i=0; i<n; i++){
        cin>>ant[i];
    }
    int key;
    cin>>key;
    int s=0;
    cout<<"The index of the number to be found is : "<<binary_rec(ant,n,s,key);
    return 0;
}