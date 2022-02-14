//Two appproahes iterative and recursive
#in python3
def sortedCheck(arr):
    for i in range(1,len(arr)):
        if arr[i]>arr[i-1]:
            continue
        else:
            return False
    return True
    
    
 ///////////////
 print ('Hello World')
def sortedCheck(arr,n):
    if n==0 or n==1:
        return True
    if arr[0]>arr[1]:
        return False

    else:
        return sortedCheck(arr[1:],n-1)

arr=[1,2,3,4,5,6,7,8,9,10,11,160,1100]
n=len(arr)
print(sortedCheck(arr,n))
 
 //////////////
 #include <iostream>
using namespace std;
bool sortedcheck(int arr[],int n){
    if (n==0 || n==1)
        return true;
    else if (arr[0]>arr[1])
        return false;
    return sortedcheck(arr,n-1);
}
int main()
{
    cout<<"Hello World\n";
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={5,4,3,2,1};
    int arr3[5]={2,3,4,56,78};
    int arr4[5]={2,3,4,56,78};
    cout<<sortedcheck(arr1,5)<<endl;
    cout<<sortedcheck(arr2,5)<<endl;
    cout<<sortedcheck(arr3,5)<<endl;
    cout<<sortedcheck(arr4,5)<<endl;
    return 0;
}

