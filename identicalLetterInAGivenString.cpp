#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    string str1;
    str1=ant[0];
    int max=0;
    int temp=0;
    for(int i=1; i<ant.length(); i++){
    if(ant[i]!=str1[0]){
        str1[0]=ant[i];
        temp=0;
    }
    else{
        temp++;
    if(temp>max){
        max=temp;
    }
    }  
    }
cout<<max;
    return 0;
}