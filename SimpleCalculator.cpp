#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    int choice = 0;
    cout << "***********************WELCOME***********************************\n";
    while (choice != 5)
    {
        cout << "1. Addition\n2. Subtraction \n3. Multiplication" << endl
             << "4. Division " << endl;
        cout << "5. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the Two number You want to Add: ";
            cin >> a >> b;
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case 2:
            cout << "Enter the Two number You want to Subtract: ";
            cin >> a >> b;
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case 3:
            cout << "Enter the Two number You want to Multiply: ";
            cin >> a >> b;
            cout << a << "*" << b << " = " << a * b << endl;
            break;
        case 4:
            cout << "Enter the Two number You want to Divide: ";
            cin >> a >> b;
            cout << a << "/" << b << " = " << a / b << endl;
            break;
        case 5:
            break;
        }
    }
    return 0;
}