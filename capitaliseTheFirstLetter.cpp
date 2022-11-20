#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    for(int i=0; i<ant.length(); i++){
        if(ant[i-1]==' '){
            ant[i]=toupper(ant[i]);
        }
        else if(i==0){
            ant[i]=toupper(ant[i]);
        }
    }
    cout<<ant;

    return 0;

}