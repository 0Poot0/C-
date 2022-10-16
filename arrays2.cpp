#include<iostream>
using namespace std;
int main(){
    int scores[10];
    for(int i=0; i<10; i++){
        scores[i]=i*10;
    }
    for(int i=0; i<10; i++){
        cout<<"scores["<<i<<"]"<<scores[i]<<endl;
    }
    return 0;
}