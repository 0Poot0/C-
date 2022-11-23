#include<iostream>
using namespace std;
string antara(string ant,char key1, char key2){
    int count,count2;
    count=count2=0;
    for(int i=0; i<ant.length(); i++){
        if(ant[i]==key1){
            count++;
        }
        else if(ant[i]==key2){
            count2++;
        }
    }
    if(count==count2){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
int main(){
    string ant;
    getline(cin,ant);
    char key1;
    cin>>key1;
    char key2;
    cin>>key2;
    antara(ant,key1,key2);
    return 0;
}