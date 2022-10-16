#include<iostream>
using namespace std;
int main(){
    int prices[10];
    for(int i=0; i<10; i++){
        cout<<"Enter the price of number "<<i+1<<" item :";
        cin>>prices[i];
    }
    int sum=0;
    int product=1;
    for(int i=0; i<10; i++){
        sum=sum+prices[i];
        product=product*prices[i];
    }
    int avg=sum/10;
    cout<<sum<<" "<<product<<" "<<avg<<endl;
    return 0;
}