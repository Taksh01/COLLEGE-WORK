#include <iostream>
using namespace std;
class pattern
{
public:
    void triangle()
    {
        for (int i = 1; i <= 6; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                if (i == 1 || i == 6 || j == 1 || j == 6)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    pattern obj;
    obj.triangle();
}