#include<iostream>
#include<string>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int count=0;
    for(int i=0; i<ant.length(); i++){
        if(ant[i]=='a'||ant[i]=='e'||ant[i]=='i'||ant[i]=='o'||ant[i]=='u'||
        ant[i]=='A'||ant[i]=='E'||ant[i]=='I'||ant[i]=='O'||ant[i]=='U'){
             count++;
        }
    }
    cout<<count;

    return 0;
}