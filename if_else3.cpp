#include <iostream>

using namespace std;

int main()
{
    float weight, height, bmi;
    cout << "Enter your weight(kg): ";
    cin >> weight;
    cout << "Enter your height(m): ";
    cin >> height;
    bmi = weight / (height*height);
    if (bmi<18.5) {
        cout << bmi << " " << "UNDERWEIGHT";
    } else if (bmi>18.5 && bmi<24.9) {
        cout << bmi << " " << "NORMAL";
    } else {
        cout << bmi << " " << "OVERWEIGHT";
    }
    system("pause>0");
    return 0;
}
