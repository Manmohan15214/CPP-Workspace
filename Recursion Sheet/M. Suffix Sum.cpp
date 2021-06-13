//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <array>
#include <set>
#include <map>
#include <iterator>
using namespace std;
typedef long long ll;

ll getSum(vector<ll> &arr, int i, ll sum)
{
    if (i == arr.size())
    {
        return sum;
    }
    else
    {
        return getSum(arr, i + 1, sum + arr[i]);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << getSum(arr, n - m, 0);
}
