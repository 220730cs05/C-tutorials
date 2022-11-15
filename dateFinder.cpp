#include <iostream>

using namespace std;

int main()
{
    int year,month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the month: ";
    cin >> month;

    switch(month){
case 2:
    (year % 4 ==0 && year % 100 != 0 || year % 400 == 0)?
    cout << "29 days month." : cout << "28 days month."; break;
case 4:
case 6:
case 9:
case 11:
    cout << "30 days month.";
    break;
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    cout << "31 days month.";
    break;
default:
    cout << "Error!";
    break;
    }

   system("pause>0");
    return 0;
}
