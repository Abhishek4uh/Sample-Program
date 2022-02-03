#include<iostream>
using namespace std;
int Squareroot(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int sq=mid*mid;
        if (sq==n)
            return mid;
        if (sq<n){
            ans=mid;
            s=mid+1;}
        else
            {e=mid-1;}
        mid=s+(e-s)/2;
    }
    
    return ans;
}
int main(){
    int n;
    std::cout << "Enter Num: "<< std::endl;
    cin>>n;
    
    cout<<"Squareroot of "<<n<<":"<<Squareroot(n);

    return 0;
}
