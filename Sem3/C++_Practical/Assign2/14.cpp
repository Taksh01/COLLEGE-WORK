#include <iostream>
using namespace std;

class cal
{
public:
    cal(int a, int b, int no)
    {
        switch (no)
        {
        case 1:
            cout << "Add is: " << a + b;
            break;
        case 2:
            cout << "Sub is: " << a - b;
            break;
        case 3:
            cout << "Multi is: " << a * b;

            break;
        case 4:
            cout << "Div is: " << a / b;
            break;
        case 5:
            cout << "Modulo is: " << a % b;
            break;

        default:
            cout << "Enter correct no";
            break;
        }
    }
};

int main()
{

    int no, a, b;
    cout << "\n Enter a:";
    cin >> a;
    cout << "\n Enter b:";
    cin >> b;
    cout << "\n 1 for add \n 2 for sub \n 3 for multi \n 4 for div \n 5 for modulo \n enter no: ";
    cin >> no;
    cal obj(a, b, no);
}