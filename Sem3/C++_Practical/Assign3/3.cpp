#include <iostream>
using namespace std;

int main()
{
    string name = "Taksh";
    int size = name.length();
    for (int i = 0; i < size; i++)
    {
        cout << name[i] << " ";
    }
}