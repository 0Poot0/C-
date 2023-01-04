#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    string tara=ant;
    getline(cin,ant);
    for(int i=ant.length()-3; i>0; i-3){
         tara[i]=ant[i]+',';
    }
    cout<<tara;
    return 0;
}