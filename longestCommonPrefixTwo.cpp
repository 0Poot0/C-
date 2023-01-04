#include<iostream>
using namespace std;
string fun(string arr_strings[], int n)
{
    int size = n;
     string str = arr_strings[0];
     if(size == 1)
        return str;
    string result = "";
    int j = 1;
    for(int i=0; i<size; i++){
        while(j < size){
            if(str[i] == arr_strings[j][i]){
                j++;
            }
            else{
                return result;
            }
        }
        result += str[i];
        j = 1;
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
