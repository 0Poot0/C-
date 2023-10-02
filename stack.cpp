#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty !!"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<s.size()<<endl;
    return 0;
}
