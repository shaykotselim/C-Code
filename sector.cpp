#include <iostream>;
#include <conio.h>;

using namespace std;

int main () {
    double pi = 3.14, radius , theata, area;

    cout << "Enter the radius:";
    cin >> radius;
    cout << "Enter the theata :";
    cin >> theata;

    area = (float)1/2 * radius * radius * theata;

    cout << "The area of sector is :" << area;
    getch();
}
