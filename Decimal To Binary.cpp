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
        int rem=n&1;
        ans=(rem*pow(10,i))+ans;
        i++;
        n=n>>1;
    }
    cout<<"Binary Value "<<ans;
    
    return 0;
}
