#include <iostream>
using namespace std;

inline int cube(int no)
{
    return no * no * no;
}

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;

    cout << "Cube of no is: " << cube(n);
}