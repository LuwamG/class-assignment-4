// class assignment 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//table of rows and colomns

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int student1 = 100;
    string course1 = "C++";
    int student2 = 50;
    string course2 = "JavaScript";

    
    cout << setw(12) << left << "| course"  << "   |   " << "student " <<"| " << endl;
    cout << "----------------------------" << endl;
    cout <<"|" << setw(12) << left << course1 <<"  |   "  << student1 << "     |   " << endl;
    cout << "----------------------------" << endl;
    cout <<"|"<< setw(12) << left << course2 << "  |   " << right << student2 << "      |     " << endl;
    cout << "----------------------------" << endl;
    return 0;
}

