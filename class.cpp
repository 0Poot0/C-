#include<iostream>
using namespace std;
class hero{

    private:
    int health=70;

    public:
    char level='a';

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char l){
        level=l;
    }


};
int main(){
    hero antara;
    cout<<"Health of antara is : "<<antara.getHealth()<<endl;
    cout<<"Level of Antara is: "<<antara.level<<endl;
    

    hero *b = new hero;
    cout<<"Health of antara is : "<<(*b).getHealth()<<endl;
    cout<<"Level of Antara is : "<<(*b).level<<endl;
    //cout<<"size is : "<<sizeof(antara)<<endl;
//cout<<"Ramesh's health is : "<<antara.getHealth()<<endl;
  //  antara.setHealth(100);
//cout<<antara.getHealth()<<endl;
//cout<<antara.level<<endl;

    return 0;
}