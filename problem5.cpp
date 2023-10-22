#include <iostream>;
#include <climits>;
#include <conio.h>;

using namespace std;

int main(){
    /*

        The maximum limit of signed char data type : 127
        The minimum limit of signed char data type : -128
        The maximum limit of unsigned char data type : 255
        The minimum limit of short data type : -32768
        The maximum limit of short data type : 32767
        The maximum limit of unsigned short data type : 65535
    */
    cout << "The maximum limit of int data tyep :\t\t"  << INT_MAX <<endl;
    cout << "The minimum limit of int data type :\t\t" <<INT_MIN <<endl;
    cout << "The maximum limit of unsigned int data type:\t" << UINT_MAX <<endl;
    cout << "The maximum limit of long long data type:\t" << LLONG_MAX << endl;
    cout << "The minimum limit of logn logn data type:\t" << LLONG_MIN << endl;
    cout << "The maximum limit of unsigned long long data type:\t" << ULLONG_MAX <<endl;
    cout << "The Bits contain in char data type :\t" << CHAR_BIT << endl;
    cout << "The maximum limit of char data type :\t" <<CHAR_MAX<< endl;
    cout << "The minimum limit of char data type :\t" <<CHAR_MIN << endl;
    cout << "The maximum limit of char data type:\t" << SCHAR_MAX <<endl;
    cout << "The minimum limit of signed char data type:\t" <<SCHAR_MIN <<endl;
    cout << "The maximum limit of unsigned char data type:\t" <<UCHAR_MAX <<endl;
    cout << "The minimum limit of short data type:\t" << SHRT_MIN << endl;
    cout << "The maximum limit of short data type:\t" << SHRT_MAX << endl;
    cout << "The maximum limit of unsigned short data type:\t" << USHRT_MAX << endl;



    getch();
}
