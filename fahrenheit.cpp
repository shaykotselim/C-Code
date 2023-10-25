#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    // Fahrenheit

    double cel , fah, celcius, kel ;

    cout << "Enter The Celcius : ";
    cin >> cel;

    fah = 1.8 * cel + 32;

    cout << "Fahrenheit = " << fah << endl;

    // Convert Fahrenheit To Celcius ;
    celcius = fah - 32 / 1.8;
    cout <<"Convert Fahrenheit To Celicius =" <<celcius << endl;
    // Convert celcius to kelvin ;
    kel = celcius + 273;
    cout << "Convert Celcius To Kelvin : " << kel;

    getch();
}
