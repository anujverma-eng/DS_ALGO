// ! https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true&h_r=next-challenge&h_v=zen     *****     Jul,30 - 13:34 //
// ! Program to print one,two...nine in english based on certain conditions     *****     Jul,30 - 13:34 //

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    string words[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    cout << "my name is anuj";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {

        if (i >= 1 && i <= 9)
        {
            cout << words[i - 1] << endl;
        }
        else
        {
            string type = ((i % 2) == 0) ? "even" : "odd";
            cout << type << endl;
        }
    }
    return 0;
}
