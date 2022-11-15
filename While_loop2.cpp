#include <iostream>

using namespace std;

int main()
{
    // Count digits of number

    int number;
    cout << "Enter any integer number: ";
    cin >> number;

    if (number==0)
        cout << "You have entered 0.\n";
    else{
        int counter = 0;
        while(number > 0){
            number /= 10;
            counter++;
        }
        cout << "The number contains " << counter << " digits.";
    }
    system("pause>0");
    return 0;
}
