#include<iostream>
using namespace std;

int compare(int arr[])
{
    int max;
    for(int i =0; i<sizeof(arr)/4; i++)
    {
        if (arr[i]<arr[i+1])
        arr[i+1] = arr[i+1];
        else {arr[i+1] = arr[i]; }
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    
    cout<< "maximum no. :"<< compare(arr);

}