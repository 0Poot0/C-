#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string ant, st="",sa="";
    cout<<"Enter line of string : ";
    getline(cin,ant);
    int largest=0;
    int l=ant.length();
    for(int i=0; i<l; i++){
        if(ant[i]==' '){
            if(largest<sa.length()){
                largest=sa.length();
                st=sa;
            }
            sa="";
        }
        else{
            sa+=ant[i];
        }
    }
    if(largest<sa.length()){
        largest=sa.length();
        st=sa;
    }
    cout<<"Largest Word Length= "<<largest<<" Word= "<<st;
    return 0;
}