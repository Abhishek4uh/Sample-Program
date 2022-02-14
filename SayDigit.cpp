#include <iostream>
using namespace std;
void Saydigit(string arr[],int n){
    
    if(n==0)
        return;
    int lastdigit=n%10;
    n=n/10;
    Saydigit(arr,n);
    cout<<arr[lastdigit]<<" ";
    
}
int main()
{   string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<"Hello World\n";
    int n;
    cout<<"Enter Num: ";
    std::cin >>n;
    Saydigit(arr,n);
    return 0;
}
