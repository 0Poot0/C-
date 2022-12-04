#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant1;
    getline(cin,ant1);
    string ant2;
    getline(cin,ant2);
    int i=0;
    int j=0;
    int count;
    for( i=0; i<ant2.length(); i++){
        count=0;
        for(int j=0; j<ant1.length(); j++){
         if(ant2[i]==ant1[j]){
            count++;
            break;
         } 
        }
        if(count==0){
            cout<<"False";
            break;
        }
        }
        if(i==ant2.length()){
            cout<<"True";
        }
    return 0;
}