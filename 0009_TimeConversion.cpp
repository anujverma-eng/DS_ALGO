// #include <iostream>
// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;

//     int hr1 = (int)s[0] - 48;
//     int hr2 = (int)s[1] - 48;
//     int l = s.length();
//     // creating integer from hr1 & hr2
//     int hour = hr1 * 10 + hr2; // 1,2 == 1*10 + 2 =12

//     char meridiem = (char)s[l - 2];
//     if (meridiem == 'A')
//     {
//         if (hour == 12)
//         {
//             s[0] = '0';
//             s[1] = '0';
//             s.pop_back();
//             s.pop_back();
//             cout << s << endl;
//         }
//         else
//         {
//             s.pop_back();
//             s.pop_back();
//         }
//     }
//     else
//     {
//         if (hour == 12)
//         {
//             s.pop_back();
//             s.pop_back();
//             cout << s << endl;
//         }
//         else
//         {
//             int replaceHour = hour + 12;
//             s[1] = (replaceHour % 10) + 48;
//             replaceHour /= 10;
//             s[0] = (replaceHour) + 48;
//             s.pop_back();
//             s.pop_back();
//             cout << s << endl;
//         }
//     }
// }

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int hh, mm, ss;
    // s[0]-'0' means :: ASCII of S[0] - ASCII 48 ex::  S[0]= 1, this means 49 - 48 as 1 is at 48 position
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');

    if (hh < 12 && s[8] == 'P')
        hh += 12;
    if (hh == 12 && s[8] == 'A')
        hh = 0;

    cout<<hh<<":"<<mm<<":"<<ss;

    return 0;
}