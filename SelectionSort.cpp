#include <iostream>
using namespace std;
void SelectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for (int j=i;j<size;j++){
            if (arr[j]<arr[min])
                min=j;
        }
        swap(arr[min],arr[i]);
    }
}
int main()
{
    cout<<"Selection--Sort:\n";
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,size);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
