#include <iostream>
using namespace std; 
int main()
{
    cout<<"Hello World"<<endl;
    
    int row;
    cout<<"Enter Rows:"<<endl;
    cin>>row;
    int col;
    cout<<"Enter Cols"<<endl;
    cin>>col;
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"2D Array->>>"<<endl;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
