// Tyuiu.ShabukovDV.CourseControl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "../Tyuiu.ShabukovDV.CourseControl.Lib/Tyuiu.ShabukovDV.CourseControl.Lib.cpp"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint0Task8V0* date = new Service;
    int a = 0;
    cout << "Введите трехзначное число: \n";
    cin >> a;
    int a1 = a / 100;
    int a2 = a / 10 % 10;
    int a3 = a % 10;
    int proiz = a1 * a2 * a3;
    cout << "произведние цифр заданного трехзначнного числа" << proiz;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
