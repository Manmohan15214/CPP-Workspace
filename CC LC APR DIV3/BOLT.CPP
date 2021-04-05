//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        float k1, k2, k3, v, time;
        cin >> k1 >> k2 >> k3 >> v;
        time = 100 / (k1 * k2 * k3 * v);
        time = round(time * 100) / 100;

        if ((9.58-time) >= 0.01)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}