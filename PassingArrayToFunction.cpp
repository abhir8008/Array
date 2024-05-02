#include<iostream>
using namespace std;

int change(int x)
{
    int y=x+8;
    cout<< y << endl;
    return y;
    //return;
}

int main()
{
    int x = 3;
    cout<< x << endl;
    x = change(x); //output 11  
    //change(x);  // it is different from change(x) as we are not assigning any value to it //output 3
    cout<< x << endl;
}

// int main()
// {
//     int x = 3;
//     cout<< x << endl;
//     cout <<change(x); // it will give output as 11
// }