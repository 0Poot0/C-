#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxno=INT_MAX;
    int minno=INT_MIN;
    for(int i=0; i<n; i++){
        int maxno=max(maxno,arr[i]);
        int minno=min(minno,arr[i]);
    }
    cout<<maxno<<" "<<minno<<endl;
    return 0;
}