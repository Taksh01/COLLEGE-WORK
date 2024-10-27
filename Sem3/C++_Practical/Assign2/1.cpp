#include <iostream>
using namespace std;

double factorial(double n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    double no;
    cout << "Enter number: ";
    cin >> no;
    if (no < 0)
    {
        cout << "Factorial of  negative number is not possible";
    }
    else
    {
        double result = factorial(no);
        cout << "Factorial of given no " << no << "is" << result;
    }
}