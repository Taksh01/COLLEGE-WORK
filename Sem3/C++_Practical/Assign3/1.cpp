#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // sizeof(arr) gives the total size of the array in bytes.

    // sizeof(arr[0]) gives the size of a single element in bytes.

    // sizeof(arr) / sizeof(arr[0]) gives the total number of elements in the array.
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}