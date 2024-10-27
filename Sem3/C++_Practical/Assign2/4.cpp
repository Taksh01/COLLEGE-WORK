#include <iostream>
using namespace std;

void add(int a, int b)
{

    cout << " Add is: " << a + b;
}

void sub(int a, int b)
{

    cout << "\n Sub is: " << a - b << endl;
}

void divide(int a, int b)
{

    cout << " Div is: " << a / b;
}

void modulo(int a, int b)
{

    cout << " \n Modulo is: " << a % b;
}

int main()
{

    add(10, 5);
    sub(10, 5);
    divide(10, 5);
    modulo(10, 5);
}
