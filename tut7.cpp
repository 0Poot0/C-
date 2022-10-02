//CONTROL STATEMENTS
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age : "<<endl;
    cin>>age;
    if((age<18)&&(age>0)){
        cout<<"you are underage : "<<endl;
    }
    else if(age==18){
        cout<<"you are still underage"<<endl;
    }
    else if(age<1){
        cout<<"you are not yet born"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }

//SWITCH CASES

    switch (age)
    {
    case 17:
         cout<<"you are 17"<<endl;
        /* code */
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    default:
        cout<<"you are eligible"<<endl;

        break;
    cout<<"you are completely eligible"<<endl;
        return 0;
    }
}
