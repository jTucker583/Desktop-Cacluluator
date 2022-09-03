#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double version = 1.0;
    bool runProgram = true;
    cout << fixed << setprecision(1);
    cout << "Command line calculator version " << version << ". Created by Jake Tucker" << endl;
    cout << "\n --------------- \n"
         << endl;
    cout << "Enter an expression to compute. + = addition, - = subtraction, * multiplication = *, division = /, modulo = %." << endl;
    cout << fixed << setprecision(3);
    while (runProgram == true)
    {
        string currentExpression = "";
        getline(cin, currentExpression);
        cout << "This program is working currently" << endl;
    }
}