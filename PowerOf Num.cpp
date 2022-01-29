#include <iostream>
using namespace std;
int power(int a, int b);
int main()
{
    int a,b;
    cout<<"Enter Number"<<endl;
    std::cin >> a>>b;
    cout<<"The result "<<power(a,b)<<endl;

    return 0;
}
int power(int a, int b){
    int ans=1;
    for (int i=1; i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
