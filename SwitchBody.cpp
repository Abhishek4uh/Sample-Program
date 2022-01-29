#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello World \n";
    int n1,n2;
    cout<<"Enter Nums:";
    std::cin >> n1>>n2;
    char ch;
    cout<<"Enter Operations: ";
    cin>>ch;
    switch(ch){
        case '+':
                cout<<n1+n2;
                break;
        case '-':
                cout<<n1-n2;
                break;
        case '*':
                cout<<n1*n2;
                break;
        case '/':
                cout<<n1/n2;
                break;
        case '%':
                cout<<n1%n2;
                break;
        default:
                cout<<"Lawde Operations Dalo";           
    }

    return 0;
}
