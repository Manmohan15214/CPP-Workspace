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

int log(ll n, int res = 0)
{
    if (n == 1)
        return res;
    return log(n / 2, res + 1);
}

int main()
{
    ll T;
    cin >> T;
    cout << log(T);
}
