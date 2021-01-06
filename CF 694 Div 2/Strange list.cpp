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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        long long sum = 0;
        bool flag = true;
        cin >> n >> x;
        int x1 = x;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
            vec.push_back(temp);
        }
        // cout << sum;
        while (flag)
        {
            for (int i = 0; i < n; i++)
            {
                if (vec[i] % x == 0)
                {
                    sum += (vec[i] / x) * x1;
                    //cout << sum << endl;
                    vec[i] = vec[i] / x;
                    // for (int i = 0; i < n; i++)
                    //     cout << vec[i] << " ";
                    // cout << endl;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            //cout << "\n\n";
            x1 = x1 * x;
        }

        cout << sum << endl;
    }
}