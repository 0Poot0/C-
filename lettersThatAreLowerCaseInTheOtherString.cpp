#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    string ant2;
    getline(cin,ant2);
    for(int i=0; i<ant.length(); i++){
        if(islower(ant[i])){
            cout<<ant2[i];
        }
    }

    return 0;

}
