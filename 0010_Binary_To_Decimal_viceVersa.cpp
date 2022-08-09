#include <iostream>
#include <cmath>
using namespace std;
void convertToDecimal(int binary)
{

    int ans = 0, i = 0;
    while (binary != 0)
    {
        int digit = binary % 10;
        binary /= 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }
        i++;
    }
    cout << ans;
}

void convertToBinary(int decimal)
{
    int ans = 0, i = 0;
    while (decimal != 0)
    {
        // Converting 1,2,3 to 321 with formula -> ans = (digit * pow(10,i) + ans )
        int bit = decimal & 1;
        cout << bit << endl;
        ans = (bit * pow(10, i)) + ans;
        decimal = decimal >> 1;
        i++;
    }
    cout << ans;
}

int main()
{
    // convertToDecimal(1010);
    convertToBinary(10);
    return 0;
}