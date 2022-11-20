#include<iostream>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int leng=ant.length();
    for(int i=leng-1; i>=0; i--){
        cout<<ant[i];
    }

    return 0;
}