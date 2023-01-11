#include<iostream>
using namespace std;

class students{
    private:
    string studentName;
    int studentRollno;
    int studentAge;

    public:
    string getStudentName(){
        return studentName;
    }

    void setStudentName(string studentName){
        this -> studentName= studentName;
    }

    int getStudentRollNo(){
        return studentRollno;
    }

    void setStudentRollNo(int studentRollno){
        this -> studentRollno= studentRollno;       
    }

    int getStudentAge(){
        return studentAge;
    }

    void setStudentAge(int studentAge){
        this -> studentAge= studentAge;
    }

};

int main(){

students Rahul;
Rahul.setStudentName("Rahul");
Rahul.setStudentRollNo(01);
Rahul.setStudentAge(18);

cout<<Rahul.getStudentName()<<endl;
cout<<Rahul.getStudentRollNo()<<endl;
cout<<Rahul.getStudentAge()<<endl;

    return 0;
}