#include<iostream>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int store=0;
    int temp;
    char var;
    for(int i=0; i<ant.length(); i++){
        temp=0;
        for(int j=i; j<ant.length(); j++){
            if(ant[i]==ant[j]){
                temp++;
            }
        }
        if(temp>store){
            store=temp;
            var=ant[i];
        }
    }
    cout<<var<<endl;
    cout<<store<<endl;
    return 0;
}