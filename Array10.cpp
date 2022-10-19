#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char string[80];
    cout<<"Enter string :";
    cin.getline(string,80);
    int length=strlen(string);
    for(int i=0; i<length; i++){
        if(string[i]==' '){
            string[i]='-';
        }
    }
    cout<<string;

return 0;
}