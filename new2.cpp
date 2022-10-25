#include<iostream>
using namespace std;
int bsearch(int nums[], int n, int key){
    int s=0;
    int e=n;
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
    int store=bsearch(nums,n,key);
    int store2=bsearch2(nums,n,key);
    if(store!=-1 && store2!=-1){
    cout<<"The first occurence of element "<<key<<" is located at index "<<store<<endl;
    cout<<"The last occurence of element "<<key<<" is located at index "<<store2<<endl;}
    else{
        cout<<"Element not found....."<<endl;
    }
    return 0;

}