#include <iostream>
#include <algorithm>

void findLargestThree(int arr[], int size)
{
    if (size < 3)
    {
        std::cout << "Array size is less than 3\n";
        return;
    }

    std::sort(arr, arr + size, std::greater<int>());

    std::cout << "The largest three elements are: " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    findLargestThree(arr, size);

    return 0;
}
