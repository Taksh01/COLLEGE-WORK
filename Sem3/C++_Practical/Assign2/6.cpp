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
    int l, b, a;
    float r;
    cout << "Enter l&b:";
    cin >> l;
    cin >> b;

    cout << "Enter radius:";
    cin >> r;

    cout << "Enter side:";
    cin >> a;
    area(r);
    area(a);
    area(l, b);
}