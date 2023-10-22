#include <iostream>;
#include <conio.h>;

using namespace std;

int main(){
    /*
        The sizeof(char) is : 1 bytes
        The sizeof(short) is : 2 bytes
        The sizeof(int) is : 4 bytes
        The sizeof(long) is : 8 bytes
        The sizeof(long long) is : 8 bytes
        The sizeof(float) is : 4 bytes
        The sizeof(double) is : 8 bytes
        The sizeof(long double) is : 16 bytes
        The sizeof(bool) is : 1 bytes
    */
    cout << "The sizeof (char) is :\t\t" << sizeof(char) <<" bytes \n";
    cout << "The sizeof (short) is :\t\t" << sizeof(short) <<" bytes \n";
    cout << "The sizeof (int) is : \t\t" << sizeof(int) << " bytes \n";
    cout << "The sizeof (long) is: \t\t"<< sizeof(long) <<" bytes \n";
    cout << "The sizeof (logn logn) is:\t"<< sizeof(long long) << " bytes \n";
    cout << "The sizeof (float) is :\t\t" << sizeof(float) << " bytes \n";
    cout << "The sizeof (double) is:\t\t" << sizeof(double) << " bytes \n";
    cout << "The sizeof (long double) is:\t" << sizeof(long double)<< "bytes \n";
    cout << "The sizeof (bool) is :\t\t" <<sizeof(bool) << "bytes \n";




    getch();
}

