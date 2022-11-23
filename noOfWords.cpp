#include<iostream>
using namespace std;
int main(){
    string ant;
    int count=0;
    getline(cin,ant);
    if(ant[0]!='\0'){
        count++;
    }
    for(int i=0; i<ant.length(); i++){
        if(ant[i]==' ' && ant[i+1]!='\0'){
            count++;
        }
    }
    cout<<count;
    return 0;
}