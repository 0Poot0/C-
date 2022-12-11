#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    string tara;
    for(int i=0; i<ant.length(); i++){
        if(i%2==0){
            tara+=tolower(ant[i]);
        }
        else{
            tara+=toupper(ant[i]);
        }
    }
    cout<<tara;
    return 0;
}