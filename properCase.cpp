#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main(){
    char string[80];
    cout<<"Enter any string :";
    cin.getline(string,80);
    string[0]=toupper(string[0]);
    for(int i=0; i<80; i++){
        if(string[i]==' '){
            string[i+1]=toupper(string[i+1]);
        }
    }
    cout<<string;
}
