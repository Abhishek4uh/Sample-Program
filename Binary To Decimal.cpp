#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    int n;
    cout<<"Enter num:"<<endl;
    std::cin >> n;
    int i=0;
    int ans=0;
    while(n!=0){
        int rem=n%10;
        if (rem==1){
            ans=ans+pow(2,i);
            }
        i++;
        n=n/10;
    }
    cout<<"Decimal Value "<<ans;
    
    return 0;
}
