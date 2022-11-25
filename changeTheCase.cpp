#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    for(int i=0; i<ant.length(); i++){
        int a=int(ant[i]);
        if(a>=65 && a<=92){
            ant[i]=tolower(ant[i]);
            cout<<ant[i];

    
        }
        else{
            ant[i]=toupper(ant[i]);
            cout<<ant[i];
        }
    }
    return 0;
}