#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter cols: ";
    cin >> cols;

    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "enter element for row  " << i << "and col: " << j << " ";

            cin >> arr[i][j];
        }
    }

    cout << "entered element are:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}