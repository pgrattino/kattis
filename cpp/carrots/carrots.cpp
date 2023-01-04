#include <iostream>
#include <string>

using namespace std;

int main()
{
    int userIn1, userIn2;
    string userStr;
    cin >> userIn1 >> userIn2;
    for (int i = 0; i <= userIn1; i++)
    {
        getline(cin, userStr);
    }
    cout << userIn2;
    return 0;
}