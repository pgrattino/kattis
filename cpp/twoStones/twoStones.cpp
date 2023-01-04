#include <iostream>

using namespace std;

int main()
{
    int userInt;
    cin >> userInt;
    if (userInt % 2 == 0)
    {
        cout << "Bob";
    }
    else
    {
        cout << "Alice";
    }
    return 0;
}