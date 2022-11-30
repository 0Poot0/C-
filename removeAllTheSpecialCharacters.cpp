#include<iostream>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    string new1;
    for(int i=0; i<ant.length(); i++){
        if((ant[i]>='a' && ant[i]<='z')|| (ant[i]>='A' && ant[i]<='Z') || (ant[i]>='0' && ant[i]<='9') || ant[i]==' ' || ant[i]=='_'){
            new1+=ant[i];

        }
    }
    cout<<new1;
    return 0;
}