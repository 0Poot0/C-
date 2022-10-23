#include<iostream>
#include<string.h>
using namespace std;
int main(){
   char rev[3][31];
   cout<<"Enter 3 strings :"<<endl;
   for(int i=0; i<3; i++){
    cin.getline(rev[i],31);
   }
   cout<<"The list of original strings follows :"<<endl;
   for(int i=0; i<3; i++){
    cout<<rev[i]<<endl;
   }
   char ch;
   for(int i=0; i<3; i++){
    int length=strlen(rev[i]);
    int j;int k;
for( j=0, k=length-1; j<length/2; j++, k-- ){
    ch=rev[i][j];
    rev[i][j]=rev[i][k];
    rev[i][k]=ch;
}}
cout<<"List of reversed string is as follows : "<<endl;
for(int i=0; i<3; i++){
    cout<<rev[i]<<endl;
}

   

    return 0;
}