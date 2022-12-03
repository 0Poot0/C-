#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int count=0;
    int temp=0;
    for(int i=0; i<ant.length(); i++){
        if(ant[i]>='A' && ant[i]<='Z'){
            count++;         
        }
        else{
            temp++;
        }
    }
    if(temp>0 && count>0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
    return 0;
}