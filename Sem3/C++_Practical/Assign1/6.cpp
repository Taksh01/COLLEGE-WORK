#include <iostream>
using namespace std;

class area
{

public:
    void circle(int r)
    {
        float pie = 3.14;
        float result = pie * r * r;
        cout << "Area of circle = " << result;
    }
};

int main()
{

    area obj;
    int r;
    cout << "enter radius: ";
    cin >> r;
    obj.circle(r);
}
