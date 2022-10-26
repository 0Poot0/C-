#include<iostream>
using namespace std;
int bsearch(int nums[], int n, int key){
    int count=1;
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(nums[mid]==key){
            for(int i=0; i<mid; i++){
                    if(nums[i]==nums[mid]){
                        count++;
                    }
                    return count;
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
    int count2=1;
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(nums[mid]==key){
            for(int i=mid+1;i<=n; i++){
                if(nums[i]==nums[mid]){
                    count2++;         
                }
                return count2;

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
    cout<<store<<endl;
    cout<<store2<<endl;
    cout<<"The target "<<key<<" occurs "<<store+store2<<" times."<<endl;}
    else{
        cout<<"Element not found....."<<endl;
    }
    return 0;

}