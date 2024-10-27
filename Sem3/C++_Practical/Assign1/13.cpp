#include <iostream>
using namespace std;
class menu
{
public:
    void check()
    {
        int a;
        cout << "enter \n  1:For Add \n 2:For Armstrong \n 3:For Palindrome \n 4:For Multiplication";
        cin >> a;
        switch (a)
        {
        case 1:
        {
            int a, b;
            cout << "enter a:";
            cin >> a;
            cout << "enter b:";
            cin >> b;
            cout << "Add is: " << a + b;
            break;
        }

        case 2:
        {
            int a, rem, sum = 0;
            cout << "enter a:";
            cin >> a;
            int originalNo = a;
            while (a > 0)
            {
                rem = a % 10;
                sum = sum + (rem * rem * rem);
                a = a / 10;
            }
            if (originalNo == sum)
            {
                cout << "\n Is a Armstrong" << originalNo;
            }
            else
            {
                cout << "\n Is Not a Armstrong" << originalNo;
            }
        }

        break;

        case 3:
        {
            int no, rem, sum = 0, oriNo;
            cout << "enter a:";
            cin >> no;
            oriNo = no;
            // you can use : while (num > 0) also inplace of for
            for (int i = 0; no > 0; i++)
            {
                rem = no % 10;
                sum = rem + sum * 10;
                no = no / 10;
            }

            if (sum == oriNo)
            {
                cout << "Palindrome";
            }

            else
            {
                cout << "Not a Palindrome";
            }
        }
        break;

        case 4:
        {
            int a, b;
            cout << "enter a:";
            cin >> a;
            cout << "enter b:";
            cin >> b;
            cout << "Multi is: " << a * b;
            break;
        }
        default:
            cout << "enter correct option: ";
            break;
        }
    }
};

int main()
{
    menu obj;
    obj.check();
}