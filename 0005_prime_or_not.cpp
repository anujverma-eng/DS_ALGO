// ! Program to get a number is Prime or not     *****     Jul,31 - 08:53 //

#include <iostream>
using namespace std;
int main()
{

    int n, i = 2;
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << n << " is not Prime" << endl;
            break;
        }
        else
        {
            cout << n << " is Prime" << endl;
            break;
        }
    }

    return 0;
}