#include<iostream>
using namespace std;
class Animal{

    public: 
    int height;
    int weight;

    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class Human{

    public:
    void speaking(){
        cout<<"Speaking..."<<endl;
    }
};

class Hybrid: public Animal, public Human{


};

int main(){

Hybrid Pari;
Pari.speaking();

    return 0;
}