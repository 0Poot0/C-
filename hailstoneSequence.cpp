#include<iostream>
using namespace std;
int hailstone(int n){
    if(n==1){
        cout<<n<<endl;
        return 0;
    }
    cout<<n<<" ";

    if(n%2==0){
        n=n/2;
    }
    else if(n%2!=0){
        n=(n*3)+1;
    }
    return hailstone(n);
}
int main(){
    int n;
    cin>>n;
    hailstone(n);
    return 0;
}