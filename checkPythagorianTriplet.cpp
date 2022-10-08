#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int max;
    int min1;
    int min2;
    if(x>y){
        if(y>z){
            max=x;
            min1=y;
            min2=z;    
        }

    }
    else{
        if(y>z){
            max=y;
            min1=x;
            min2=z;
        }
        else{
            max=z;
            min1=x;
            min2=y;
        }
    }
    if((round(pow(max,2)))==(round(pow(min1,2)))+(round(pow(min2,2)))){
        cout<<"Its a pythagorian triplet"<<endl;
    }
    else{
        cout<<"Its not a pythogorian triplet"<<endl;
    }
    return 0;
}