//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    int T, N, K, x, y;

    cin >> T;
    while (T--)
    {

        cin >> N >> K >> x >> y;
        vector<pair<int, int>> res;

        if (x == y)
        {
            cout << N << " " << N << endl;
            continue;
        }

        else if (x > y)
        {
            res.push_back(make_pair(N, N - (x - y)));
            res.push_back(make_pair(N - (x - y), N));
            res.push_back(make_pair(0, x - y));
            res.push_back(make_pair(x - y, 0));
        }
        else
        {
            res.push_back(make_pair(N - (y - x), N));
            res.push_back(make_pair(N, N - (y - x)));
            res.push_back(make_pair(y - x, 0));
            res.push_back(make_pair(0, y - x));
        }

        cout << res[(K - 1) % 4].first << " " << res[(K - 1) % 4].second << endl;
    }
}