//Write a C++ program to find the second largest element in an array of integers. 

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,6,5,115,44,7,8,9};
    int first = 0;
    int second =0;

    for(int i =0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first = arr[i];
        }
        else if (arr[i]>second)
        {
            second = arr[i];
        }
    }
    cout<< "Second largest element in array: "<< second;
}