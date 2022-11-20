#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string ant="110803";
    sort(ant.begin(),ant.end(),greater<int>());
    cout<<ant<<endl;
    return 0;
}