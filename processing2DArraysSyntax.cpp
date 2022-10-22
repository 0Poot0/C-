#include<iostream>
using namespace std;
int main(){
    int sales[5][12];
    int total=0;
    for(int i=0; i<5; i++){
        cout<<"Enter sales of salesman "<<i+1<<" :"<<endl;
        for(int j=0; j<12; j++){
            cout<<"Month"<<j+1<<":";
            cin>>sales[i][j];
            total=total+sales[i][j];    
        }
        cout<<"\n";
        cout<<"Total sales of salesman "<<i+1<<" is"<<total<<endl;
    }
    
    return 0;
}