#include<iostream>
using namespace std;
int main(){
    int arr[]={27,55,64,72};
    cout<<"1st "<<arr<<endl;
    cout<<"2nd "<<arr[0]<<endl;
    cout<<"3rd "<<&arr<<endl;
    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*(arr+1)<<endl;
    cout<<"6th "<<*arr+1<<endl;
    cout<<"7th "<<arr[2]<<endl;
    cout<<"8th "<<*(arr+2)<<endl;    // arr[i] = *(arr+i)

    int i=3;
    cout<<"9th "<<3[arr]<<endl;
    cout<<"10th "<<2[arr]<<endl;
    
    cout<<"11th "<<*(i+arr)<<endl;  // i[arr] = *(i+arr)

    return 0;
}