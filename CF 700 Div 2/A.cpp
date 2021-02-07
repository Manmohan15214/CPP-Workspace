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
    int T;
    cin >> T;
    while (T--)
    {
        bool alice = true;
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (alice)
            {
                if (str[i] == 'a')
                    str[i] = 'b';
                else
                    str[i] = 'a';
            }
            else
            {
                if (str[i] == 'z')
                    str[i] = 'y';
                else
                    str[i] = 'z';
            }
            alice = !alice;
        }

        cout << str << endl;
    }
}