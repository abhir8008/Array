#include<iostream>
using namespace std;

int main()
{
    int array[5] = {1,2,3,4,5};
    int n = sizeof(array)/4;
    int sum=0;
    for(int i=0; i<=n-1; i++)
    {
        sum += array[i];
    }
    cout<<sum;

}