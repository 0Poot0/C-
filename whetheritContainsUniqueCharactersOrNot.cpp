#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int flag=0;
    for(int i=0; i<ant.length(); i++){
        for(int j=i+1; j<ant.length(); j++){
        if(ant[i]==ant[j]){
            flag=1;
            break;
        }
    }}
    if(flag==0){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
}