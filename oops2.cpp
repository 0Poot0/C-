#include<iostream>
#include<string>
using namespace std;
class hero{

//private classes..
    private:
    int health=70;

//public classes..
    public:
    char level='a';
    char *name;

//constructor..
    hero(){
        cout<<"This function is called by default !!"<<endl;
        name= new char[100];
    }

//parameterised constructor..
    hero(int h, char ch){
        this -> health = h;
        this -> level= ch;
    }

//copy constructor...
// hero(hero &temp){
//     cout<<"Copy constructor is called.."<<endl;
//     this -> health= temp.health;
//     this -> level = temp.level;
//     this -> name= temp.name;
// }

//getters
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

//print function..
    void print(){
        cout<<endl;
        cout<<"The name is: "<< this->name<<endl;
        cout<<"The health is : "<<this->health<<endl;
        cout<<"The level is : "<<this->level<<endl;
        cout<<endl;
    }

//setters..
    void setHealth(int h){
        health=h;
    }

    void setLevel(char l){
        level=l;
    }

    void setName(char name[]){
        this->name=name;
    }
};

int main(){
    // hero antara(50,'n');
    // antara.print();

    // hero suresh(antara);
    // suresh.print();
hero antara;
antara.setHealth(70);
antara.setLevel('T');
char ant[100]="Tara";
antara.setName(ant);
antara.print();

hero tal(antara);
tal.print();

antara.name[0]='c';
antara.print();

tal.print();


    return 0;
}