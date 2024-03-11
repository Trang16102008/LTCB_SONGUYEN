// LTCB_SONGUYEN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
ussing namespace std;
int main()
{
    int so1, so2, so3, lonnhat, nhonhat;
    cout << "Nhap so 1: "; cin >> so1;
    cout << "Nhap so 2: "; cin >> so2;
    cout << "Nhap so 3: "; cin >> so3;

    lonnhat = nhonhat = so1;

    if (nhonhat > so2) {
        nhonhat = so2;
    }
    if (lonnhat > so2) {
        lonnhat = so2;
    }

    if (nhonhat > so3) {
        nhonhat = so3;
    }
    if (lonnhat < so3) {
        lonnhat = so3;
    }

    cout << "So nho nhat la: " << nhonhat << endl;
    cout << "So lon nhat la: " << lonnhat << endl;

    return 0;
}
