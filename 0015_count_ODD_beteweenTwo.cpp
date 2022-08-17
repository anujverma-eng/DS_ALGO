#include <iostream>
using namespace std;
int main()
{
    int high, low;
    cin >> high >> low;
    int cal = (high - low) / 2;
    int count = cal + 1;
    if (low % 2 == 0 && high % 2 == 0)
    {
        cout << cal;
    }
    else
    {
        cout << count;
    }
    return 0;
}