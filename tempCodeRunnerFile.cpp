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