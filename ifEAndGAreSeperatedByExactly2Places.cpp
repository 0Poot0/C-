#include<iostream>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int count=0;
    int len=ant.length();
    for(int i=0; i<len; i++){
        if(ant[i]== 'e'){
            if(ant[i+2]=='g'){
                count++;
            }
        }
        /*else if(ant[i]== 'g'){
            if(ant[i+2]== 'e'){
                count++;
            }
        }*/
    }
    cout<<count;
    return 0;
}