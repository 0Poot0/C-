#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter sales made by the salesman :";
    cin>>n;
    int com;
    if(n>5000 && n<12000){
        com = n*(0.03); 
        cout<<"Your commission is:"<<com<<endl;
    }
    else if(n>12000 && n<22000){
        com=n*(0.07);
        cout<<"Your commission is:"<<com<<endl;
    }
    else if(n>22000 && n<30000){
        com=n*(0.1);
        cout<<"Your commission is:"<<com<<endl;
    }
    else if(n>3000){
        com=n*(0.15);
        cout<<"Your commission is:"<<com<<endl;
    }
    else{
        cout<<"Your commission is:"<<com<<endl;
    }
}
