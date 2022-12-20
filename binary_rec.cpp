#include<iostream>
using namespace std;
int binary_rec(int ant[],int n,int key){
    static int s;
    static int e=n;
    int mid=(s+e)/2;
    if(s<e){
        return -1;
    }
    if(ant[mid]==key){
        return mid;
    }

        if(ant[mid]>key){
            e=e-1;
        }
        else if(ant[mid]<key){
            s=s+1;
        }
        return(ant,n,key);

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
    cout<<"The index of the number to be found is : "<<binary_rec(ant,n,key);
    return 0;
}