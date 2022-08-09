#include <iostream>
using namespace std;
int main()
{
    int columnNumber = 28;
    string s = "";
    while (columnNumber != 0)
    {
        char c = (columnNumber - 1) % 26 + 65;
        s = c + s;
        columnNumber = (columnNumber - 1) / 26;
    }
    cout << s;
    return 0;
}