#include <iostream>
using namespace std;
int main()
{
    int n = 234;
    int product = 1;
    int sum = 0;
    while (n > 0)
    {
        product *= n % 10;
        sum += n % 10;
        // cout << n << endl;
        n /= 10;
    }
    cout << product - sum;
    return 0;
}