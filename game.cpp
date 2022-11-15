#include <iostream>

using namespace std;

int main()
{
    cout << "Introduction of the game: \nFirst player will enter any number from 1 to 10 and the second player will guess it."<<endl<<endl;
    int hostNumber;
    cout << "HOST: ";
    cin >> hostNumber;
    system("cls");
    int guestNumber;
    cout << "Guess: ";
    cin >> guestNumber;

    if (guestNumber==hostNumber){
        cout << "Correct!";
    } else {
        cout << "Failed!";
    }

   system("pause>0");
    return 0;
}
