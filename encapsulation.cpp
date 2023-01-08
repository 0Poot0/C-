#include <iostream>
using namespace std;
class Hero{
    private:
    string Name= "Gia";
    int rollno;
    int marks;

    public:
    string getName(){
        return this->Name;
    }

};
int main(){
    Hero antara;
cout<< antara.getName()<<endl;
    return 0;
}