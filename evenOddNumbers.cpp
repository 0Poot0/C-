#include<iostream>
using namespace std;
int Even(int start,int end){
    if(start>end){
        return 0;
    }
    if(start%2==0){
        cout<<start<<" ";
    }
    return Even(start+1,end);
}

int odd(int start, int end){
    if(start>end){
        return 0;
    }
    if(start%2!=0){
        cout<<start<<" ";
    }
    return odd(start+1,end);
}
int main(){
    int start;
    cin>>start;
    int end;
    cin>>end;
Even(start,end);
cout<<endl;
odd(start,end);
    return 0;}
