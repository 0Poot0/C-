#include<iostream>
using namespace std;
int bsearch(int nums[], int n, int key){
    int s=0;
    int e=n;
    int store;
    while(s<=e){
        int mid=(s+e)/2;
        if(nums[mid]==key){
            for(int i=0; i<=mid; i++){
                    if(nums[i]==nums[mid]){
                        return i;
                        break;
                    }
                }
            }
        else if(nums[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int bsearch2(int nums[],int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(nums[mid]==key){
            for(int i=mid;i>=mid; i++){
                if(nums[i]!=nums[mid]){
                    i--;
                    return i;
                }

            }
        }
        else if(nums[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int key;
    cin>>key;
    cout<<"The first occurence of element "<<key<<" is located at index "<<bsearch(nums,n,key)<<endl;
    cout<<"The last occurence of element "<<key<<" is located at index "<<bsearch2(nums,n,key)<<endl;
    return 0;

}