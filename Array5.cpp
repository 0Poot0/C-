#include<iostream>
using namespace std;
int main(){
    int sales[30];
    for(int i=0; i<30; i++){
        cout<<"Enter sales for day "<<i+1<<": ";
        cin>>sales[i];
    }
    int total=0;
    for(int i=0; i<30; i++){
        total=total+sales[i];
    }
    
    int avg= total/2;
    cout<<total<<" "<<avg<<endl;
    return 0;
}