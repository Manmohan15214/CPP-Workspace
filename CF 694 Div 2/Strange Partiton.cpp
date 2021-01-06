//#include <bits/stdc++.h>
#include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <set>
// #include <map>
// #include <iterator>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        double x;
        double sumMin = 0;
        double sumMax = 0;
        cin >> n >> x;
        double arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (long long i = 0; i < n; i++)
        {
            sumMin += arr[i];
            sumMax += ceil(arr[i] / x);
        }

        cout << fixed << static_cast<long long>(ceil(sumMin / x)) << " " << static_cast<long long>(sumMax) << endl;
    }
}