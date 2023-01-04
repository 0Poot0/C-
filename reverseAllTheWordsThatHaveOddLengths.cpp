#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int i,j,k;
    i=j=k=0;
    string storage;
    for(int i=0; i<ant.length(); i++){
        for(int j=0; j!=' ' || j!='\0'; j++){
            k++;
        }
        for(int j=k-1; j>=0; j--){
            storage=ant[j];
        }
    }
cout<<storage;
    return 0;
}