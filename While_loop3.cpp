#include <iostream>

using namespace std;

int main()
{
    //Reversing number

    int number;
    int reversedNumber = 0;

    cout << "Number: ";
    cin >> number;

    while(number != 0){
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }

    cout << "Reversed number: " << reversedNumber;

    system("pause>0");
    return 0;
}
