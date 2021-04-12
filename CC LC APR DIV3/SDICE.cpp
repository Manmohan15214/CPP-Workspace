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
        ll n;
        cin >> n;
        ll res = (n / 4) * 44;
        ll remain = n % 4;

        if (n >= 4)
        {
            if (remain == 0)
            {
                cout << res + 16;
            }
            else if (remain == 1)
            {
                cout << res + 32;
            }
            else if (remain == 2)
            {
                cout << res + 44;
            }
            else
                cout << res + 55;
        }
        else
        {
            if (remain == 1)
            {
                cout << 20;
            }
            else if (remain == 2)
            {
                cout << 36;
            }
            else
            {
                cout << 51;
            }
        }

        cout<<endl;
    }
}