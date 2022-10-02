#include<iostream>
using namespace std;
int main(){
int sum=0;
for(int i=0; i<10; i++){
    int x;
    cout<<"Enter a number :"<<endl;
    cin>>x;
    sum=sum+x;
}
cout<<"The average is :"<<sum/10<<endl;
    return 0;
}