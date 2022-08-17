#include <iostream>
using namespace std;
int main()
{
    int n = 19;
    int check = 0;
    bool loop = true;
    int sq_sum = 0;
    while (loop)
    {
        // cout << "n = " << n << endl;
        while (n)
        {
            int digit = n % 10;
            check += digit;
            sq_sum += (digit * digit);
            n /= 10;
        }
        if (check == 2)
        {
            loop = false;
            cout << "I'm Not Happy at all!!";
            break;
        }
        if (sq_sum == 1)
        {
            loop = false;
            cout << "I'm Happy";
            break;
        }
        else
        {
            n = sq_sum;
            sq_sum = 0;
            check = 0;
        }
    }
    return 0;
}