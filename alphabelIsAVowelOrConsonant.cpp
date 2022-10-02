#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter an alphabet"<<endl;
    cin>>a;
    if(a=='a'||a== 'e' ||a== 'i' ||a== 'i' ||a== 'o' ||a== 'u' ||a== 'A' ||a== 'E'||a=='I'||a=='O'||a=='U'){
        cout<<"vowel"<<endl;
    }
    else{
        cout<<"consonant"<<endl;
    }
    return 0;}