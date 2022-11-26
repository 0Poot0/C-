#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int num=0;
    int sum=0;
    for(int i=0; i<ant.length(); i++){
        if(ant[i]>='0' && ant[i]<='9'){
            num=num*10 +(ant[i]-'0');
        }
        else{
            sum+=num;
            num=0;
        }
    }
    cout<<sum+num;
    return 0;
}