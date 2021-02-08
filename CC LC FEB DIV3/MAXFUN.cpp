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
        ll N, minVal = INT_MAX, maxVal = INT_MIN;
        cin >> N;
        while (N--)
        {
            ll temp;
            cin >> temp;
            minVal = min(minVal, temp);
            maxVal = max(maxVal, temp);
        }
        cout << 2 * (maxVal - minVal) << endl;
    }
    return 0;
}