#include<iostream>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    string key;
    getline(cin,key);
    string value="";
    string ant2="";
    int flag=0;
    int i=0;
    while(i<ant.length()){
        if(ant[i]==' '|| ant[i]=='\0'){
            for(int i=0; i<value.length(); i++){
                if(value[i]!=key[i]){
                    value="";
                    break;
                }
            }
        }
        else{
            value+=ant[i];
        }
    }
    cout<<ant2;
    return 0;
}
