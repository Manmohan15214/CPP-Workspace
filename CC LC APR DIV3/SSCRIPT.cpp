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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int count = 0;
        bool isPresent = false;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '*')
            {
                count++;
                if (count == k)
                {
                    isPresent = true;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }

        if (isPresent)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}