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
        string str;
        cin >> str;
        char last = '0';
        int count = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1' && last == '0')
            {
                count++;
                last = '1';
            }
            else
            {
                last = str[i];
            }
        }
        cout << count << "\n";
    }
}