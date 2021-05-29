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

bool isPos(string str, string temp)
{
    int j = 0;
    int count = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        char c = temp[i];
        while (j < str.size())
        {
            if (str[j] == c)
            {
                count++;
                j++;
                break;
            }
            else
            {
                j++;
            }
        }
    }

    if (count == temp.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    int T;
    cin >> str;
    cin >> T;
    while (T--)
    {
        string temp;
        cin >> temp;
        bool flag = isPos(str, temp);
        if (flag)
        {
            cout << "POSITIVE\n";
        }
        else
        {
            cout << "NEGATIVE\n";
        }
    }
}