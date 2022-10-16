#include<iostream>
using namespace std;
int main(){
    int salaries[5];
    for(int i=0; i<5; i++){
        cout<<"Enter the monthly salary of employee "<<i+1<<":";
        cin>>salaries[i];
    }
    int count=0;
    for(int i=0; i<5; i++){
        if(salaries[i]>100000){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}