#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter size of array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter element for " << i << " position:  ";
        cin >> arr[i];
    }
    cout << "entered elements are: ";

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}