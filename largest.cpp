#include<iostream>
using namespace std;
int largest(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        return max;
    }
}
int main(){
      char select;
      int num[80];
      for(int i=0; i!='n'; i++){
            cout<<"Enter element: "<<endl;
            cin>>num[i];
            cout<<"Want to enter more (y/n) ? :"<<endl;
            cin>>select;
            if(select=='n'){
                cout<<"The largest element is: "<<largest(num,80);
                break;
        }
        
      }
    return 0;
}