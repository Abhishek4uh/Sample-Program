#include <iostream>
using namespace std;
int main(){
int amount=0,hundred=0,fifty=0,twenty=0,ten=0,one=0,remainder=0;
cout<<"Plaese enter the amount"<<endl;
cin>>amount;
switch (1)
{
case 1:hundred=amount/100;
        remainder = amount%100;
        cout<<"The number of 100's note is "<<hundred<<endl;
        
case 2: fifty = remainder/50;
        remainder = remainder % 50;
        cout<<"The number of 50's note is "<<fifty<<endl;
        
case 3: twenty = remainder/20;
        remainder= remainder % 20;
        cout<<"The number of 20's note is "<<twenty<<endl;
        
case 4: ten = remainder /10;
        remainder = remainder % 10;
        cout<<"The number of 10's note is "<<ten<<endl;

case 5: one = remainder /1;
        remainder = remainder % 1;
        cout<<"The number of 1's coin is "<<one<<endl;
}
return 0;
}
