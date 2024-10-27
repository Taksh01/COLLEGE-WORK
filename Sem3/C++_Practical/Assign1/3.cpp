#include <iostream>
using namespace std;

class Week
{

public:
    string cal()
    {

        int a = 1;

        switch (a)
        {
        case 1:
            return "Monday";
            break;
        case 2:
            return "Tuesday";
            break;
        case 3:
            return "Wednesday";
            break;
        case 4:
            return "Thursday";
            break;
        case 5:
            return "Friday";
            break;
        case 6:
            return "Saturday";
            break;
        case 7:
            return "Sunday";
            break;
        default:
            return "Not Correct No";
            break;
        }
    }
};

int main()
{

    Week obj;
    string ans;
    ans = obj.cal();
    cout << "Correct answer is : " << ans;
}
