//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <math.h>
#include <iterator>
using namespace std;

int main()
{
    int T, N, sum = 0, i = 3;
    string str;
    cin >> T;
    while (T--)
    {

        cin >> N;
        cin >> str;
        for (auto it = str.begin(); it != str.end(); it++)
        {
            if (*it == '1')
            {
                sum += pow(2, i);
            }
            i--;
            if (i < 0)
            {
                cout << char(97 + sum);
                i = 3;
                sum = 0;
            }
        }
        cout << endl;
    }
}
