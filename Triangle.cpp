#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    //Area of Traiangle;

    // Declar Variable;
    double base, height, area;

    cout << "Enter The Base: \t";
    cin >> base;
    cout << "Enter The height: \t";
    cin >> height;

    area = (float)1/2 * base * height;

    cout << "The Base of Triangle is:"<<area;

    getch();


}
