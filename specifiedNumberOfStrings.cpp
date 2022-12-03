#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ant;
    getline(cin,ant);
    int n;
    cin>>n;
    string count;
    for(int i=0; i<ant.length(); i++){
        if(ant[i]=='a' || ant[i]=='e' ||ant[i]=='i' ||ant[i]=='o' ||ant[i]=='u'){
            count+=ant[i];
       }
    }
    for(int i=0; i<n; i++){
        cout<<count[i];
    }

    return 0;
}