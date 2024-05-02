#include<iostream>
using namespace std;

 int main()
 {
    int arr[5];
    int arr2[5] = {1,2,3,4,5};
    cout<< "enter the arrays: ";
    for (int i=0; i<=4;i++) 
    {
        cin>>arr[i];
    }
    for(int i =0; i<=4;i++)
    {
        cout<< arr[i]<<" ";
        //cout<< "arr1:"<< arr2[i]<< endl;
    }
    arr[0]=100;
    cout<<endl;
    for(int i =0; i<=4;i++)
    {
        cout<< arr[i]<<" ";
    }
    //cout<< "arr1:"<< arr2[i];
    cout<<endl;
        for(int i =0; i<=4;i++)
    {
        cout<< arr[i]*2<<" ";
    }

 }