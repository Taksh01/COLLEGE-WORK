#include <iostream>
using namespace std;
int main()
{
    string fname = "taksh";
    string name = " shah";

    cout << "Before Swap: " << "\n fname: " << fname << " name: " << name;

    fname.swap(name);

    cout << "\nAfter Swap: " << "\n fname: " << fname << " name: " << name;
}
