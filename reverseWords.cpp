#include<iostream>
using namespace std;
int main(){
    int l,i,k=0;
    char str[80],word[80];
    cout<<"Enter any string:"<<endl;
    cin.getline(str,80);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]!=' '){
            word[k]=str[i];
            k=k+1;
        }
        else{
            while(k>0){
                cout<<word[--k];
            }
            cout<<str[i];
        }

    }
    return 0;
}