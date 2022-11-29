#include<iostream>
using namespace std;
string fun(string arr[],int n){
    string str=arr[0];
    string result="";
    int j=1;
    for(int i=0; i<n; i++){
        while(j<n){
            if(str[i]==arr[j][i]){
                j++;
            }
            else{
                return result;
            }
        }
        result+=str[i];
        j=1;
    }
    return result;

}
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
            cin>>arr[i];
    }
    cout<<fun(arr,n);
    return 0;
}