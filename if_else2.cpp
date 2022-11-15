#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the shapes of triangle: ";
    cin >> a >> b >> c;
    if (a==b && a==c && b==c) {
        cout << "Triangle is equilateral";
    } else if (a==b || b==c || c == a) {
        cout << "Triangle is isosceles";
    } else {
        cout << "Triangle is scalene";
    }
    system("pause>0");
    return 0;
}
