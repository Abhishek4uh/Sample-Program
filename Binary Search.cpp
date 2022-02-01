#include <iostream>
using namespace std;
int binarysearch(int arr[],int key,int size){
    int left=0;
    int right=size-1;
    while(left<=right){
    int mid=left+(right-left)/2;
    if (arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
        left=mid+1;
    }
    else{
        right=mid-1;
    }
    }
    return 0;
}
int main()
{
    int arr[11]={1,2,3,4,5,58,98,105,630,5444,96000};
    int key;
    cout<<"Enter a key\n";
    cin>>key;
    int res=binarysearch(arr,key,11);
    if (res){
        cout<<"key founded at "<<res;
    }
    else{
        cout<<"Not found";
    }

    return 0;
}
