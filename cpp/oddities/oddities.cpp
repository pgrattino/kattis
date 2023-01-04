#include <iostream>

using namespace std;

int main(){
    int numOfIn, userIn;
    cin >> numOfIn;
    for (int i = 0; i < numOfIn; i++){
        cin >> userIn;
        if (abs(userIn) % 2 == 0)
            cout << userIn << " is even" << endl;
        else
            cout << userIn << " is odd" << endl;
    }
    return 0;
}