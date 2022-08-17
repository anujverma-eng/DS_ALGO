#include <iostream>
using namespace std;
// int main()
// {
//     int x = 3, y = 4;
//     int points[5][5] = {{1, 2}, {3, 1}, {2, 4}, {2, 3}, {4, 4}};
//     int idx = -1, min = 0, dist, i;
//     int len = sizeof(points) / sizeof(points[0]);
//     for (i = 0; i < len; i++)
//     {
//         cout << "points[" << i << "][0] = " << points[i][0] << " points[i][1] = " << points[i][1] << endl;
//         if (x == points[i][0] || y == points[i][1])
//         {
//             cout << "found" << endl;
//             dist = (abs(x - points[i][0]) + abs(points[i][1]));
//             if (i = 0)
//             {
//                 min = dist;
//                 idx = i;
//             }
//             if (min > dist)
//             {
//                 min = dist;
//                 idx = i;
//                 cout << "min = " << min << " && dist = " << dist << " idx = " << idx << endl;
//             }
//             else
//             {
//                 cout << "not min" << endl;
//             }
//         }
//     }
//     return 0;
// }

int main()
{
    int x = 3, y = 4;
    int points[5][5] = {{1, 2}, {3, 1}, {2, 4}, {2, 3}, {4, 4}};
    int idx = -1, min = 1e9, dist, i;
    int len = sizeof(points) / sizeof(points[0]);
    for (i = 0; i < len; i++)
    {
        dist = abs(x - points[i][0]) + abs(y - points[i][1]);
        if (points[i][0] == x || points[i][1] == y)
        {

            cout << "dist = " << dist << endl;
            if (min > dist)
            {
                min = dist;
                idx = i;
                cout << "min = " << min << " && dist = " << dist << " idx = " << idx << endl;
            }
        }
    }
    cout << "answer = " << idx;
    return 0;
}