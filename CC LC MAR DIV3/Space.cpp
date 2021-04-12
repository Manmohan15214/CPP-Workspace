//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll num;
        cin >> num;
        ll temp[num];

        for (ll i = 0; i < num; i++)
        {
            cin >> temp[i];
        }

        sort(temp, temp + num);

        ll sol = 0;
        ll temp2 = 0;

        for (ll i = 0; i < num; i++)
        {
            if (i + 1 < temp[i])
            {
                temp2 = 1;
                break;
            }

            sol += (i + 1 - temp[i]);

            if (temp2 == 1)
            {
                cout << "Second" << endl;
            }
            else
            {
                if (sol % 2 == 1)
                    cout << "First" << endl;
                else
                    cout << "Second" << endl;
            }
        }
    }
}