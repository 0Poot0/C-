#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    string vowels;
    for(int i=0; i<ant.length(); i++){
        if(ant[i]=='a'||ant[i]=='e'||ant[i]=='i'||ant[i]=='o'||ant[i]=='u'||
        ant[i]=='A'||ant[i]=='E'||ant[i]=='I'||ant[i]=='O'||ant[i]=='U'){
            vowels+=ant[i];

        }
        }
    int count=vowels.length()-1;
    for(int i=0; i<ant.length(); i++){
        if(ant[i]=='a'||ant[i]=='e'||ant[i]=='i'||ant[i]=='o'||ant[i]=='u'||
        ant[i]=='A'||ant[i]=='E'||ant[i]=='I'||ant[i]=='O'||ant[i]=='U'){
            ant[i]=vowels[count];
            count--;
        }
    }
    cout<<ant;

    return 0;
}