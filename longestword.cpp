#include<iostream>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int max=0;
    string largestword;
    string word="";
    for(int i=0; i<ant.length(); i++){
        if(ant[i]==' '){
           if(word.length()>max){
            max=word.length();
            largestword=word;
           }
           word="";
        }
        else{
            word+=ant[i];
        }
    }
if(word.length()>max){
    max=word.length();
    largestword=word;
}
cout<<largestword;
    return 0;
}