#include <iostream>
using namespace std;

void change(int a, int b)
{

    cout << "\n Before Swap: " << "\n a = " << a << " b = " << b;

    int swap;
    swap = a;
    a = b;
    b = swap;

    cout << "\n After Swap: " << "\n a = " << a << " b = " << b;
}

int main()
{

    change(10, 5);
}
