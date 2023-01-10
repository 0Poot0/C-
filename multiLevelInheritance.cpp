#include<iostream>
using namespace std;
class Animal{
    public:
    int height;
    int weight;
    string color;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{

};

class germanShephard:public Dog{

};

int main(){

Dog tommy;
tommy.speak();
cout<<tommy.height<<endl;

germanShephard chobo;
chobo.speak();


    return 0;
}