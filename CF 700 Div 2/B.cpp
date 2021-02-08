#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <iterator>
using namespace std;
typedef long long ll;

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll A, B, N;
        cin >> A >> B >> N;

        ll pow[N], hlt[N];
        ll maxP = 0;
        for (ll i = 0; i < N; i++)
        {
            cin >> pow[i];
            maxP = max(maxP, pow[i]);
        }
        for (ll i = 0; i < N; i++)
        {
            cin >> hlt[i];
            B -= ((hlt[i] + A - 1) / A) * pow[i];
        }

        if (B + maxP > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}