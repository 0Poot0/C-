#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool balanced(string str){
stack<char> s;
for(int i=0; i<str.length();i++){
    if(s.empty()){
        s.push(str[i]);
    }
    else if((s.top()=='(' && str[i]==')') || (s.top()=='{' && str[i]=='}') ||(s.top()=='[' && str[i]==']')){
         s.pop();
    }
}
if(s.empty()){
    return true;
}
else{
    return false;
}
}
int main(){
    string str;
    cin>>str;
    if(balanced(str)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not balanced";
    }
    return 0;
}