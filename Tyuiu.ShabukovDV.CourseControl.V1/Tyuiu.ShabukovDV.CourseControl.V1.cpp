// Tyuiu.ShabukovDV.CourseControl.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "../Tyuiu.ShabukovDV.CourseControl.V1.Lib/Tyuiu.ShabukovDV.CourseControl.V1.Lib.cpp"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    std::cout << "Решить уравние \n";
    std::cin >> a >> b >> c;
    ISprint0Task8V2* res = new Service1();
    int itog = res->Rezultat(a, b, c);
    std::cout << "вычислить выражение 5+((2*x-z)/(3+y^2) =";
    std::cout << "равно";
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
