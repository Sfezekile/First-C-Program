// My first C++ program (Chapter 1 (Processing a C++ program))
#include <iostream>

using namespace std;

int main()
{
    /* Variables */
    double a;
    double b;
    char num;
    char again;

    // looping the program
    do
    {
        cout << "******************************************" << endl;
        cout << "|               Calculator               |" << endl;
        cout << "******************************************" << endl;
        cout << "1. Add" << endl;
        cout << "2. subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cin >> num;

        if (num == '1')
        {
            cout << "Enter your first number: " << endl;
            cin >> a;
            cout << "Enter your second number: " << endl;
            cin >> b;

            cout << "Sum: " << (a + b) << "\n";
        }
        else if (num == '2')
        {
            cout << "Enter your first number: " << endl;
            cin >> a;
            cout << "Enter your second number: " << endl;
            cin >> b;

            cout << "Difference: " << (a - b) << "\n"
                 << endl;
        }
        else if (num == '3')
        {
            cout << "Enter your first number: " << endl;
            cin >> a;
            cout << "Enter your second number: " << endl;
            cin >> b;

            cout << "Product: " << (a * b) << "\n"
                 << endl;
        }
        else if (num == '4')
        {
            cout << "Enter your first number: " << endl;
            cin >> a;
            cout << "Enter your second number: " << endl;
            cin >> b;

            if (b == 0)
                cout << "Error: cannot divide by zero";
            cout << "Quotient: " << (a / b) << "\n"
                 << endl;
        }
        else
        {
            cout << "Error: Enter a number from 1 - 4\n"
                 << endl;
        }
        cout << "Would you like to continue (Y/N)\n"
             << endl;
        cin >> again;
    } while (again == 'Y' || again == 'y');

    // end of program
    cout << "Goodbye\n"
         << endl;

    return 0;
}
