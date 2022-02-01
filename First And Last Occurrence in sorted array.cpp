#include <iostream>
using namespace std;
int firstOccur(int arr[],int size,int key){
    int left=0;
    int right=size-1;
    int ans=-1;
    int mid=left+(right-left)/2;
    while(left<=right){
    if (arr[mid]==key){
        ans=mid;
        right=mid-1;
    }
    else if(key>arr[mid]){
        left=mid+1;
    }
    else{
        right=mid-1;
    }
    mid=left+(right-left)/2;
    }
    return ans;
}
int LastOccur(int arr[],int size,int key){
    int left=0;
    int right=size-1;
    int ans=-1;
    int mid=left+(right-left)/2;
    while(left<=right){
    if (arr[mid]==key){
        ans=mid;
        left=mid+1;
    }
    else if(key>arr[mid]){
        left=mid+1;
    }
    else{
        right=mid-1;
    }
    mid=left+(right-left)/2;
    }
    return ans;
}
int main()
{
    int arr[10]={1,2,2,2,2,2,2,3,3,5};
    int key;
    cout<<"Enter a key\n";
    cin>>key;
    cout<<"first Occurence at "<<firstOccur(arr,10,key)<<endl;
    cout<<"Second Occurence at "<<LastOccur(arr,10,key)<<endl;
    return 0;
}
