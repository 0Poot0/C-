#include<iostream>
using namespace std;
int main(){
    cout<<"1.Fahrenheit to celsius"<<endl;
    cout<<"2.Celsius to fahrenheit"<<endl;
    int n;
    cout<<"Enter your choice(1-2) : ";
    cin>>n;
    if(n==1){
        float F;
        cout<<"Enter the temperature in fahrenheit:";
        cin>>F;
        float Celsius= (F-32)/(1.8);
        cout<<"The temperature in celsius is :"<<Celsius<<endl;
    }
    else{
        float c;
        cout<<"Enter the temperature in Celsius :";
        cin>>c;
        float Fahrenheit = (c*1.8)+32;
        cout<<"The tempertaure in fahrenheit is: "<<Fahrenheit<<endl;       
    }
    return 0;
}