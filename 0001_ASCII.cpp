// ! Program to print whether the Character entered in LOWERCASE, UPPERCASE, NUMERIC or Any other     *****     Jul,30 - 12:16 //
#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;

    // * Convert the Character into INT type (i.e Convert ch to ASCII values)     *****     Jul,30 - 12:16 //
    int n = (int)c;
    if (n >= 65 && n <= 90)
    {
        cout << "Upper case character";
    }
    else if (n >= 97 && n <= 122)
    {
        cout << "Lower case character";
    }
    else if (n >= 48 && n <= 57)
    {
        cout << "Numeric";
    }
    else
    {
        cout << "You have entered " << c << " and it's ASCII value is: " << n;
    }

    // * Program to print all ASCII Values     *****     Jul,30 - 12:19 //
    /*
    int ascii = 0;
    while (ascii <= 127)
    {
        cout << "ASCII Value of " << ascii << " is " << (char)ascii << endl;
        ascii++;
    }
    */

    return 0;
}