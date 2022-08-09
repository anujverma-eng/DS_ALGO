#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x = 1211213, ans = 0, i = 0;
    bool isPalindrome = false;
    int check = x;
    if (x < 0)
    {
        isPalindrome = false;
        return 0;
    }
    while (x != 0)
    {
        ans = (ans * 10) + x % 10;
        x /= 10;
        i++;
    }
    (check == ans) ? isPalindrome = true : isPalindrome = false;
    cout << isPalindrome;
    return 0;
}