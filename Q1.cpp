// Write a C++ program to find the largest element of a given array of integers.
#include<iostream>
using namespace std;

void array(int X[])
{
    int n = sizeof(X) / sizeof(X[0]);
    for (int i = 0; i < n; i++)
    {
        if (X[i] > X[i + 1])
            {
                X[i] = X[i + 1];
            } else
            {
                X[i + 1] = X[i];
            }
            return X[i+1];
    }
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    //int M = array(arr);
    cout << "maximum number in array"<< array(arr);
}