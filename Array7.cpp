#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array :";
    cin>>n;
    int specificElement[n];
    cout<<"Enter the elements of the array :";
    for(int i=0; i<n; i++){
        cin>>specificElement[i];
    }
    int key;
    cout<<"Enter the element to be searched for :";
    cin>>key;
    int element;
    for(int i=0; i<n; i++){
        if(key==specificElement[i]){
            element=i;  
            cout<<"Element found at position "<<i;          
        }
    }
    return 0;
}