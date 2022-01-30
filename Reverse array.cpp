#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,55,66,77,88,99,110};
    int left=0;
    int temp;
    int right=9;
    cout<<"Array looks like\n";
    for(int j=0;j<10;j++){
        cout<<arr[j]<<" ";
    }
    cout<<"\n";
    while(left<right){
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for(int j=0;j<10;j++){
        cout<<arr[j]<<" ";
    }
    
    return 0;
}
