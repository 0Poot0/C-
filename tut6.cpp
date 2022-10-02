//CONSTANTS

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int var1 = 4;
    cout<<var1<<endl;
    var1=5;
    cout<<var1<<endl;
    const int var2= 6;
    cout<<var2<<endl;
    //var2=7;
    //cout<<var2<<endl;

//MANIPULATORS...ENDL,,SETW....

    int a= 2 ; int b = 34563;
    cout<<setw(5)<<a<<endl;
    cout<<setw(5)<<b<<endl;


//OPERATOR PRECEDENCE.....
    int x = 3;
    int y = 4;
    int operation = x*1+y-3/1;
    cout<<operation<<endl;







    return 0;
}