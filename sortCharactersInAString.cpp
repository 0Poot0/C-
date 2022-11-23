#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int len=ant.length();
    for(int i=0; i<len; i++){
        for(int j=0; j<len-1; j++){
            if(ant[j]>ant[j+1]){
                int temp=ant[j];
                ant[j]=ant[j+1];
                ant[j+1]=temp;

            }
        }
    }

    cout<<ant;
    return 0;
}