//  Write a C++ program to find the k largest elements in a given array of integers.

#include <iostream>
using namespace std;

int findkth(int arr[], int size, int k)
{
    if (k <= 0 && k > size)
    {
        cout << "Enter the correct number" << endl;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            int temp = arr[j];
            if (arr[j] < arr[j + 1])
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i];
        if(i == size)
        {
            break;
        }
        cout<< ",";
    }
    cout << endl;
    cout << "The "<<k<<"th largest value is: " << arr[k-1];
}

int main()
{
    int arr[] = {1, 2, 3, 6, 5, 8, 9, 7, 4};
    int size = (sizeof(arr) / sizeof(arr[0])) - 1;
    int k = 2;

    findkth(arr, size, k);
}