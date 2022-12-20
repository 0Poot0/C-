#include<iostream>
using namespace std;
int palindrome(string ant,int flag){
    int len=ant.length();
    static int i;
    if(i>len/2){
        return flag;
    }
    if(ant[i]!=ant[len-i-1]){
        flag=1;
        return flag;
    }
    if(ant[i]==ant[len-i-1]){
        i++;
    }
    return palindrome(ant,flag);
}

int main(){
    string ant;
    int flag=0;
    getline(cin,ant);
    if(palindrome(ant,flag)==0){
        cout<<"Its a palindrome"<<endl;
    }
    else{
        cout<<"Its not a palindrome"<<endl;
    }
    return 0;
}