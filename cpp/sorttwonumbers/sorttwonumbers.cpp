#include <iostream>

using namespace std;

int main()
{
    int userIn1, userIn2;
    cin >> userIn1 >> userIn2;
    if (userIn1 < userIn2)
    {
        cout << userIn1 << " " << userIn2;
    }
    else
    {
        cout << userIn2 << " " << userIn1;
    }
    return 0;
}