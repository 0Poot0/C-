#include<iostream>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int len=ant.length();
    int count=0;
    for(int i=0; i<len/2; i++){
        if(ant[i]!=ant[len-1-i]){
            count=1;
            break;
        }
    }
    if(count==0){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}