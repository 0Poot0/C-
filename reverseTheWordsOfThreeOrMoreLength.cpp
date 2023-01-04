#include<iostream>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int i=0;
    string temp="";
    string count="";
    while(i<ant.length()){
        if(ant[i]==' ' || ant[i]=='\0'){
           for(int i=temp.length()-1; i>=0; i--){
               count+=temp[i];
           }
           temp.clear();
           count+=' ';
        }
        else{
            temp+=ant[i];
        }
    }
    cout<<count;
    return 0;
}