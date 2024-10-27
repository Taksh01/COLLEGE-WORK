#include <iostream>
using namespace std;

void area(int l, int b)
{

    cout << "area of rectangle" << l * b << endl;
}

void area(float r)
{

    cout << "area of circle" << 3.14 * r * r << endl;
}

void area(int a)
{

    cout << "area of square" << a * a << endl;
}

int main()
{
    area(2.5F);
    area(5);
    area(5, 1);
}