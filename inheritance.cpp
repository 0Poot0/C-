#include<iostream>
using namespace std;

class Human{
    public:
    int height;

    protected:
    int weight;

    private:
    string colour;
    string persona;
};

class male: protected Human {

public:
string character;

int getWeight(){
    return this->weight;
}
};

int main(){
male argha;
 cout<<argha.colour<<endl;
 cout<<argha.character<<endl;
 cout<<argha.getWeight()<<endl;
 cout<<argha.height<<endl;
cout<<persona<<endl;

    return 0;
}