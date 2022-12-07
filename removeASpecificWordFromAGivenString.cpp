#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string tara;
    string tara2;
    string ant;
    getline(cin,ant);
    string key;
    getline(cin,key);

   int temp=ant.find(key);
   tara=ant.substr(0,temp);
   tara2=ant.substr(temp+key.length()+1);
   cout<<tara+tara2;
    return 0;
}