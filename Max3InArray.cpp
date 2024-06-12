// Write a C++ program to find the largest three elements in an array.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,6,5,4,7,8,9,9,8};
    int first = 0;
    int second = 0,third = 0;

    for(int i =0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i]>first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second)
        {
            third = second;
            second = arr[i];
            
        }
        else if (arr[i]> third)
        {
            third=arr[i];
        }
    }

 cout<< "First , second , third are respectively: "<< first << " "<<second<< " "<<third<<endl;

}