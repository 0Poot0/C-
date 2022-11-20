#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    for(int i=0; i<ant.length(); i++){
        ant[i]=ant[i]+1;
        cout<<ant[i]; 
        }
    return 0;
    }
