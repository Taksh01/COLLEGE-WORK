#include <iostream>
using namespace std;

class prime
{
public:
    void no()
    {

        for (int i = 1; i <= 100; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= i; j++)
            {

                if (i % j == 0)
                {
                    cnt++;
                }
            }

            if (cnt == 2)
            {
                cout << i << ":prime no\n ";
            }
        }
    }
};

int main()
{
    prime obj;
    obj.no();
}