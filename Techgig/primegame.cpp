//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <iterator>
#include<climits>
using namespace std;
typedef long long ll;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int r1, r2;
        cin >> r1 >> r2;
        int minP = INT_MAX, maxP = INT_MIN;

        for (int i = r1; i <= r2; i++)
        {
            if (isPrime(i))
            {
                    minP = min(minP, i);
                    break;
            }
        }

        for (int j = r2; j >= r1; j--)
        {
            if (isPrime(j))
            {
                maxP = max(maxP, j);
                break;
            }
        }

        if (minP == INT_MAX && maxP == INT_MIN)
        {
            cout << -1 << "\n";
        }

        else
        {
            cout << maxP - minP << "\n";
        }
    }
}