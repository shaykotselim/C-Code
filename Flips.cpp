#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    double pi, heightA, widthB, area ;
    pi =3.1416;
    cout << "Enter the heightA:";
    cin >> heightA;

    cout << "Enter the WidthB:";
    cin >> widthB;

    area = pi * heightA * widthB;
    cout << "The Area of Flips :"<<area;
}
