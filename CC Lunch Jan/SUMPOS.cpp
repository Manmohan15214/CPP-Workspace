#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <set>
// #include <map>
// #include <iterator>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y == z || y + z == x || z + x == y)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}