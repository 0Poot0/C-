#include<iostream>
using namespace std;
int main(){
    int temp[10];
    cout<<"1st "<<sizeof(temp)<<endl;

    int *ant=&temp[0];
    cout<<"2nd "<<sizeof(ant)<<endl;
    cout<<"3rd "<<sizeof(*ant)<<endl;
    cout<<"4th "<<sizeof(&ant)<<endl;
    return 0;
}
