#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ans = 0;
    int prevValue;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        int value = 0;
        if (s[i] == 'I')
        {
            value = 1;
        }
        else if (s[i] == 'V')
        {
            value = 5;
        }
        else if (s[i] == 'X')
        {
            value = 10;
        }
        else if (s[i] == 'L')
        {
            value = 50;
        }
        else if (s[i] == 'C')
        {
            value = 100;
        }
        else if (s[i] == 'D')
        {
            value = 500;
        }
        else
        {
            value = 1000;
        }

        cout << "value = " << value << " ans = " << ans << " prevValue =" << prevValue << endl;
        if (prevValue == value)
        {
            ans += value;
        }
        else
        {
            if (value < ans)
            {
                ans -= value;
            }
            else
            {
                ans += value;
            }
        }
        prevValue = value;
    }
    cout << ans;
    return 0;
}