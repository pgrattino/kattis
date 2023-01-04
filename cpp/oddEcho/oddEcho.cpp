#include <iostream>
#include <string>

using namespace std;

int main(){
    int userInt = 0;
    string userStr;
    cin >> userInt;

    for (int i = 0; i < userInt; i++){
        cin >> userStr;
        if (i % 2 == 0){
            cout << userStr << endl;
        }
    }
}