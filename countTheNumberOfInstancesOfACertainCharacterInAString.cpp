#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    string key;
    getline(cin,key);
    int count=0;
    for(int i=0; i<ant.length(); i++){
        if(ant[i]==key[0]){
            count++;
        }
    }
    cout<<count;
    return 0;
}