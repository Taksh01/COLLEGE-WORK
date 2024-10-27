#include <iostream>
using namespace std;

int arrCalculator(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main()
{
    int arr[] = {125, 356, 65, 78, 9, 1987, 5556, 45};
    int sizeofArray = sizeof(arr) / sizeof(arr[0]);

    int ans = arrCalculator(arr, sizeofArray);
    cout << "smallest element is:" << ans;
}
