#include<iostream>
using namespace std;
int fun(string ant,int n){
    if(n<0){
        return 0;
    }
    cout<<ant[n-1];
    fun(ant,n-1);
}
int main(){
     string ant;
     getline(cin,ant);
     int len=ant.length();
     int ans=fun(ant,len);

    return 0;
}