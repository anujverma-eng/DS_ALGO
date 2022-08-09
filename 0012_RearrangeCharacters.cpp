#include <iostream>
using namespace std;
int main()
{
    string s = "alsdfjlsaljslfjsaaa", target = "aaaaaa";
    bool stop = false;
    int counter = -1;
    while (!stop)
    {
        for (int i = 0; i < target.length(); i++)
        {
            int count;
            if (s != "" && count != 0)
            {
                count = 0;
                for (int j = 0; j < s.length(); j++)
                {
                    if (target[i] == s[j])
                    {
                        s.replace(j, 1, "");
                        stop = false;
                        count++;
                        break;
                    }
                    else
                    {
                        stop = true;
                    }
                }
            }
            else
            {
                stop = true;
                break;
            }
        }
        counter++;
    }
    cout << counter;

    return 0;
}