#include<iostream>
using namespace std;
int main(){
    int A[3][3],B[3][3];
    cout<<"Enter the first matrice:"<<endl; 

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
          cin>>A[i][j]; 
        }
    }
    cout<<"Enter the second matrice:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>B[i][j];
        }
    }
    int flag=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(A[i][j]!=B[i][j]){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        cout<<"The matrices are unequal"<<endl;
    }
    else{
        cout<<"The matrices are equal"<<endl;
    }
    return 0;
}