#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int i;
    for(i=0; i<ant.length(); i++){
        if(i==0 || ant[i-1]==' '){
            if(ant[i]<'A' || ant[i]>'Z'){
                cout<<"False";
                break;
            }
        }
    }
    if(i==ant.length()){
        cout<<"True";
    }
    return 0;
}