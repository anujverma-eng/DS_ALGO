#include <iostream>
using namespace std;

void pattern1()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3_method1()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * (n - i)) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3_method2()
{
    int rows = 5;

    for (int i = rows; i >= 1; --i)
    {
        for (int space = 0; space < rows - i; ++space)
        {
            cout << "  ";
        }
        for (int j = i; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n - 1; j++) // * You can add (2*i -1) instead of ( n-1 ), but then you need to decrement the 'i' loop from 5 to 1
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern5()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int space = 1; space < i; space++)
        {
            cout << "  ";
        }
        for (int j = n; j <= ((2 * n) - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int character = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << (char)character << " ";
            character++;
        }
        cout << endl;
    }
}
void pattern7()
{
    int n = 5;
    int character = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)character << " ";
            character++;
        }
        cout << endl;
    }
}

void pattern8()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern9()
{
    int n = 5;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}
void series1()
{
    //* TO Print the Series like :: 1, 2, 4, 7, 11
    // int x = 1;
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << x << endl;
    //     x += i;
    // }

    //* TO Print the Series like :: 1, 3, 6, 10, 15
    // int x = 1;
    // for (int i = 1; i <= 5; i++)
    // {
    //     x += i;
    //     if (x == 2)
    //     {
    //         x = 1;
    //     }
    //     cout << x << endl;
    // }
}

int main()
{
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    // pattern1();

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // pattern2();

    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *
    // pattern3_method1();
    // pattern3_method2();

    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *
    // pattern4();

    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *
    // pattern5();

    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    // pattern6();

    // A
    // B C
    // D E F
    // G H I J
    // K L M N O
    // pattern7();

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // pattern8();

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // pattern9_method1();


    //* TO Print the Series like :: 1, 2, 4, 7, 11
    //* TO Print the Series like :: 1, 3, 6, 10, 15
    // series1();

    return 0;
}
