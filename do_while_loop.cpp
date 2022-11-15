#include <iostream>

using namespace std;

int main()
{
    int usersPin = 7777, pin, errorCounter = 0;
    do{
        cout << "Pin: ";
        cin >> pin;
        if (usersPin != pin)
            cout << "Incorrect pin! Enter again.\n";
            errorCounter++;
    } while(errorCounter < 3 && pin != usersPin);

    system("cls");

    if (errorCounter < 3)
        cout << "Loading...\n";
    else
        cout << "Blocked!\n";
    system("pause");
    return 0;
}
