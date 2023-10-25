#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    // The Area of Circle;

    double pi = 3.1416, radius, area;

    cout << "Enter the radius:";
    cin >> radius;

    area = pi * radius * radius ;
    cout << "The area of circle: "<< area;
    getch();
}
