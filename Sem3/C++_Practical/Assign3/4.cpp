#include <iostream>
using namespace std;

int arrCalculator(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {25, 356, 65, 78, 89, 1987, 5556, 45};
    int sizeofArray = sizeof(arr) / sizeof(arr[0]);

    int ans = arrCalculator(arr, sizeofArray);
    cout << "largest element is:" << ans;
}
