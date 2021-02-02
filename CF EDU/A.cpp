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
        int n, d;
        bool flag = false;
        cin >> n >> d;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            vec.push_back(temp);
            if (temp > d)
            {
                flag = true;
            }
        }

        if (flag)
        {
            sort(vec.begin(), vec.end());

            if (vec[0] + vec[1] <= d)
                cout << "YES\n";
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "YES\n";
        }
    }
}