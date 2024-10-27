#include <iostream>
using namespace std;

class exchange
{
private:
    int a;
    int b;

    friend void swap(exchange &obj);
};

void swap(exchange &obj)
{
    cout << "Enter a:";
    cin >> obj.a;
    cout << "Enter b:";
    cin >> obj.b;

    cout << "Before Swap: \n a = " << obj.a << "b = " << obj.b;
    int temp;
    temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
    cout << "\n After Swap: \n a = " << obj.a << "b = " << obj.b;
}

int main()
{
    exchange object;
    swap(object);
}