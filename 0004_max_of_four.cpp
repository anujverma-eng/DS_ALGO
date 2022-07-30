// ! Program to get Max of Four variables (2 approaches used)     *****     Jul,30 - 17:09 //

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four_simple_approach(int a, int b, int c, int d)
{
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                return a;
            }
            else
            {
                return d;
            }
        }
        else
        {
            if (c > d)
            {
                return c;
            }
            else
            {
                return d;
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                return b;
            }
            else
            {
                return d;
            }
        }
        else
        {
            if (c > d)
            {
                return c;
            }
            else
            {
                return d;
            }
        }
    }
    return 0;
}

int max_of_four_with_fn(int a, int b, int c, int d)
{
    // * Max  function is available in #include<algorithm> library     *****     Jul,30 - 17:12 //
    return max(max(a, b), max(c, d));
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // int ans = max_of_four_simple_approach(a, b, c, d);
    int ans2 = max_of_four_with_fn(a, b, c, d);
    cout << ans2;
    return 0;
}
