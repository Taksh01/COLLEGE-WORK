#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        // ADDITIONAL CONCEPT IF USER WANTS TILL A PARTICULAR NO LIKE TILL FIBONACCI REACHES 10 AND NOT ALL 10 NUMBERS
        // if (fibonacci(i) >= number)
        // {
        //     break;
        // }

        cout << fibonacci(i) << " ";
    }
    cout << endl;
}