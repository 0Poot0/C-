#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    char key;
    cin>>key;
    string temp="";
    for(int i=0; i<ant.length(); i++){
       if(ant[i]!=key){
        temp+=ant[i];
       }
    }
    cout<<temp;
    return 0;
}