#include <iostream>;
#include <conio.h>;

using namespace std;

int main () {
    // The area of parallelogram

    double height, base, area;

    cout << "Enter the height : ";
    cin >> height;
    cout << "Enter the width : ";
    cin >> base;

    area = base*height;
    cout << "The area of parallelogram: "<<area;

    getch();

}
