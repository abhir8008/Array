#include<iostream>
using namespace std;

// passing By reference  works in array it is different from integer function. as memory location is alloted
// it changes in same memory location unlike other integer function. 


int change(int X[])
{
    X[0]=9;

}


int main()
{
    int arr[3] = {1,2,3};
    for(int i =0; i<=2;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    change(arr);

    for(int i =0; i<=2;i++)
    {
        cout<< arr[i]<<" ";
    }
}