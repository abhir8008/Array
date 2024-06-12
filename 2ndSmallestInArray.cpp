// Write a C++ program to find the second smallest elements in a given array of integers.
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 6, 5, 4, 77, 88, 0, 9};
    int small = INT_MAX;
    int secondsmall =INT_MAX;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] < small)
        {
            secondsmall = small;
            small = arr[i];
        }
        else if (secondsmall > arr[i] && arr[i]>small)
        {
            secondsmall = arr[i];
        }
    }
    cout << " Secondsmall element in array is: " << secondsmall;
}