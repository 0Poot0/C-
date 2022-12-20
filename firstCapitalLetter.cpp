#include<iostream>
#include<string>
using namespace std;
char capital(string ant){
    static int i;
    if(isupper(ant[i])){
        return ant[i];
    }
    else{
        i++;
        return capital(ant);
    }
}
int main(){
    string ant;
    getline(cin,ant);
    cout<<"The first capital letter is : "<<capital(ant);
    return 0;
}