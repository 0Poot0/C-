#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

class hero{

    int health=70;

//public classes..
    public:
    char level='a';
    char *name;
    static int timeToComplete;

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
 hero(hero &temp){

    //Deep copy
    char *b = new char [strlen(temp.name)+1];
    strcpy(b,temp.name);
    this->name = b;

     cout<<"Copy constructor is called.."<<endl;
     this -> health= temp.health;
     this -> level = temp.level;
     //this -> name= temp.name;
 }

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

    static int random(){
        return timeToComplete;
    }

    //Destructor    
    ~hero(){
cout<<"Destructor called..."<<endl;
    }
};

int hero::timeToComplete = 10;


int main(){

    // hero b;
    // hero *c= new hero();
    // delete c;
    cout<< hero::timeToComplete<< endl;
    cout<<hero::random()<<endl;

    return 0;
    }