#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char text[80];
    cout<<"Enter the line :";
    cin.getline(text,80);
    int length=strlen(text);
    int count=0;
    for(int i=0; i<length; i++){
        if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||
        text[i]=='I'||text[i]=='O'||text[i]=='U'){
          count++;
         }
    }
    cout<<count;
    return 0;
}