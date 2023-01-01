#include<iostream>
using namespace std;
class hero{

    private:
    int health=70;

    public:
    char level='a';

    hero(){
        cout<<"This function is called by default !!"<<endl;
    }

    hero(int h, char ch){
        this -> health = h;
        this -> level= ch;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char l){
        level=l;
    }


};
int main(){
    hero antara(10,'n');
    cout<<antara.getHealth()<<endl;
    cout<<antara.level<<endl;

    hero *tara= new hero(20,'t');
    cout<<(*tara).getHealth()<<endl;
    cout<<(*tara).level<<endl;

    return 0;
}