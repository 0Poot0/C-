#include<iostream>
using namespace std;
void copy(string ant){
    int len=ant.length();
    static int i;
    if(i>len){
        return;
    }
    cout<<ant[i];
    i++;
    return copy(ant);
}
int main(){
    string ant;
    getline(cin,ant);
    cout<<"String successfully copied : "<<endl;
copy(ant);
    return 0;
}