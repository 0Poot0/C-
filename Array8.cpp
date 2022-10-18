#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char string[n];
    for(int i=0; i<n; i++){
        cin>>string[i];
    }
    int flag=0;
    for(int i=0; i<n/2; i++){
        if(string[i]!=string[n-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Its a palindrome"<<endl;

          }
    else{
        cout<<"Its not a palindrome"<<endl;
    }
    return 0;
}