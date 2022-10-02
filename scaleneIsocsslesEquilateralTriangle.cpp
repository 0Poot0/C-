#include<iostream>
using namespace std;
int main(){
    int sideA,sideB,sideC;
    cin>>sideA>>sideB>>sideC;
    if(sideA==sideB){
        if(sideB==sideC){
            cout<<"equilateral triangle"<<endl;
        }
        else{
            cout<<"isosceles triangle"<<endl;
        }
    }
    else if(sideB==sideC){
            cout<<"isosceles triangle"<<endl;
        }
    else if(sideA==sideC){
        cout<<"isosceles triangle"<<endl;
    }
    else{
        cout<<"scalene triangle"<<endl;
    }
    return 0;
}