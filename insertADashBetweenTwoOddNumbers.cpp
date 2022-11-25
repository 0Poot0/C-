#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    string new1;
    getline(cin,ant);
    for(int i=0; i<ant.length(); i++){
        new1+=ant[i];
        if(ant[i]=='1'||ant[i]=='3'||ant[i]=='5'||ant[i]=='7'||ant[i]=='9'){
            if(ant[i+1]=='1'||ant[i+1]=='3'||ant[i+1]=='5'||ant[i+1]=='7'||ant[i+1]=='9'){
                new1+='-';
            }
        }
    }
    cout<<new1;
    return 0;
}