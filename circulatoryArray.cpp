#include<iostream>
using namespace std;
int lsearch(int nums[],int n, int key){
    for(int i=0; i<n; i++){
        if(nums[i]==key){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int nums[6]={8,9,10,2,5,6};
    int key=10;
    cout<<"Element found at index "<<lsearch(nums,6,10);
        return 0;
}