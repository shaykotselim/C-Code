#include <iostream>
#include<conio.h>

using namespace std;
/*
        UTTARA UNIVERSITY
    This is first program in C++
    Name: Shaykot Hossain Selim
    Program : BSC IN CSE
    ID: 2231091023

*/

int main(){

    //variable declaration
    int num1, num2, toadd,tosubtract,tomultiply;
    float todivided;

    cout << "Enter Number : ";

    // variable initilization
    cin >> num1 >> num2;

    toadd = num1 + num2;
    tosubtract = num1 - num2;
    tomultiply = num1 * num2;
    todivided = num1 / num2;

   cout << "ADD: "<<toadd <<endl <<"\t Subtract: " << tosubtract <<"\n" <<"\t\t Multiply: " << tomultiply <<endl <<"\t\t\t Divided: " <<todivided ;
    //cout << "ADD: " <<toadd <<endl ;
    getch();
}
