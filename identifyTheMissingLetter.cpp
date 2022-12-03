#include<iostream>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    string new1;
    new1="abcdefghijklmnopqrstuvwxyz";
    string temp="";
    int count;
    int i=0;
    int j=0;

    while(i<ant.length() && j<new1.length()){
        if(ant[i]!=new1[j]){
            temp+=new1[j];
            j++;
        }
        i++; j++;
    }
    if(i==j){
        cout<<"There is no missing character";
    }
    else{
    cout<<temp;}
    return 0;
}