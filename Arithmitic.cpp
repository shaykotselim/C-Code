#include <iostream>;
#include <conio.h>;
#include <iomanip>
using namespace std;

int main (){

    //Declar Variable;

    float num1, num2;
    float sum , sub, mul, div ,rem;

    cout <<"Please Enter Two Number: ";
    cin >> num1 >>num2;

    cout << showpoint;
    cout << setprecision(2);
    cout << fixed;
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float) num1 / num2;
    //rem = num1 % num2;

    cout <<setw(40) <<"Total Sum of "<< num1 << " and " << num2 <<" is :"<< sum <<endl;
    cout <<setw(40) << noshowpoint;
    cout <<setw(40) << "Total Substraction of "<< num1 << " and " << num2 <<" is :"<< sub <<endl;
    cout <<setw(40) << "Total Multiply of "<< num1 << " and " << num2 <<" is :"<< mul <<endl;
    cout <<setw(40) << "Total Divided of "<< num1 << " and " << num2 <<" is :"<< div<<endl;
   // cout << "Total Reminder of "<< num1 << " and " << num2 <<" is :"<< rem <<endl;


    getch();
}
