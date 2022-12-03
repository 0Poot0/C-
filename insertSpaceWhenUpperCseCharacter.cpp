#include<iostream>
#include<string>
#include<algorithm>
#include<ctype.h>
using namespace std;
int main(){
    string ant;
    string tara;
    getline(cin,ant);
    for(int i=0; i<ant.length(); i++){
        if(ant[i]>='A' && ant[i]<='Z' && i!=0){
            tara=tara+' '+ant[i];
        }
        else{
            tara+=ant[i];
        }
    }
    cout<<tara;
    return 0;
}