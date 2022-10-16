#include<iostream>
using namespace std;
int main(){
    int marks[10];
    for(int i=0; i<10; i++){
        cout<<"Enter marks of student" <<i+1<<endl;
        cin>>marks[i];
    }
    for(int i=0; i<10; i++){
        cout<<"Marks["<<i<<"]="<<marks[i]<<endl;
    }
    return 0;
}