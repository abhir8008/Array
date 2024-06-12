// Write a C++ program to find the largest element of a given array of integers.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 6, 5, 4};
    int max = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout <<"Maximum in array is: "<<max<<endl;
    
}