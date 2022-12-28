#include<iostream>
using namespace std;
void update(int *p){
    p=p+1;
    cout<<p<<endl;
}
int main(){
    int value=5;
    int *p=&value;
    cout<<"Value before change "<<p<<endl;
update(p);
cout<<"value after change "<<p<<endl;
    return 0;
}