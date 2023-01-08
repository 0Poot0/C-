#include<iostream>
#include<stack>
using namespace std;
int main(){

    //Creating stack
    stack<int> ant;

//Push operation
    ant.push(1);
    ant.push(2);
    ant.push(3);
    ant.push(4);

//POP Operation
    ant.pop();

//Top operation
    cout<<ant.top()<<endl;

//Empty operation
    if(ant.empty()){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

cout<<"The size of the stack is : "<<ant.size()<<endl;

    return 0;
}