#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    string key;
    getline(cin,key);
    int a=ant.find(key+key);
    int len=key.length();

    cout<<a+len;

    return 0;
}