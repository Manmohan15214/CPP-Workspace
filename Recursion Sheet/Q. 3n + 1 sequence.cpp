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

ll getSeq(int num, ll length = 1)
{
    if (num == 1)
        return length;

    //If number is not 1 then check if it's odd or even.
    else
    {
        if (num & 1)
        {
            return getSeq(3 * num + 1, length + 1);
        }
        else
        {
            return getSeq(num / 2, length + 1);
        }
    }
}

int main()
{
    int T;
    cin >> T;
    cout << getSeq(T);
}