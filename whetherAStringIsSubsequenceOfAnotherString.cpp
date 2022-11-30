#include<iostream>
using namespace std;
bool fun(string word,int n,string sub,int m){
    int i,j;
    i=j=0;
    while(i<m && j<n){
        if(sub[i]==word[j]){
            i++;
        }
        j++;
    }
    return i==m;


}
int main(){
    string word;
    getline(cin,word);
    string sub;
    getline(cin,sub);
    int n=word.length();
    int m=sub.length();
    if(fun(word,n,sub,m)){

    cout<<fun(word,n,sub,m);
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}