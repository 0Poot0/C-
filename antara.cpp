#include <iostream>
int addnumbers(int first_number,int second_number){
   int result=first_number+second_number;
   return result;

}
int main(){
    int firstnumber{3};
    int secondnumber{4};
    std::cout<<"the first number is:"<<firstnumber<<std::endl;
    std::cout<<"the second number is:"<<secondnumber<<std::endl;
    int sum= firstnumber+secondnumber;
    std::cout<<"sum:"<<sum<<std::endl;
    sum=addnumbers(43,29);
    std::cout<<"sum:"<<sum<<std::endl;
    std::cout<<"sum:"<<addnumbers(2,3)<<std::endl;


    return 0;
}