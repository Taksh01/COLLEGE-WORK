#include <iostream>
using namespace std;

int arrCalculator(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sizeofArray = sizeof(arr) / sizeof(arr[0]);

    int ans = arrCalculator(arr, sizeofArray);
    cout << "Total elements in array are:" << ans;
}
