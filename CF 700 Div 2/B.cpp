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
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, N;
        cin >> A >> B >> N;

        int pow[N], hlt[N];

        for (int i = 0; i < N; i++)
        {
            cin >> pow[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> hlt[i];
        }

        int dead = 0;

        for (int i = 0; i < N; i++)
        {

            while (hlt[i] > 0 && B > 0)
            {
                B -= pow[i];
                hlt[i] -= A;
            }

            if (hlt[i] <= 0)
                dead++;

            if (B <= 0)
                break;
        }

        if (dead < N)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}