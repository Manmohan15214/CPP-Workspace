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
        int ocount = 0;
        int temp;
        cin >> temp;
        for (int i = 0; i < temp; i++)
        {

            int num;
            cin >> num;
            if (num % 2 != 0)
            {
                ocount++;
            }
        }

        if (ocount % 2 != 0)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
}