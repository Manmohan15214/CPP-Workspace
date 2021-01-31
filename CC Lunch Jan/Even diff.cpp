// 5 7 1 4

// all odd/even = no need

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
        int ocount = 0, ecount = 0;
        int temp;
        cin >> temp;
        for (int i = 0; i < temp; i++)
        {

            int num;
            cin >> num;
            if (num % 2 == 0)
            {
                ecount++;
            }
            else
            {
                ocount++;
            }
        }

        if ((ecount == temp) || (ocount == temp))
        {
            cout << 0 << endl;
        }
        else
        {
            if (ecount < ocount)
                cout << ecount << endl;
            else
                cout << ocount << endl;
        }
    }
}