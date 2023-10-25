#include <iostream>;
#include <conio.h>;

using namespace std;

int main () {
    // Area of Trapezoid(US)/ Trapezium(UK);

    double height, base, area;

    cout << "Enter the height :";
    cin >> height;
    cout << "Enter the width :";
    cin >> base;

    area = (float)1/2 * height * base;
    cout << "The Area of Trapezoid is :" << area;

    getch();
}
