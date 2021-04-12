//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll num;
        cin >> num;
        ll A = pow(2, floor(log2(num))) - 1;
        ll B = A ^ num;
        cout << A * B << '\n';
    }
}