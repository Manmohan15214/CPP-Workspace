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

ll getSum(ll arr[], ll sum, int i, int size)
{
    if (i == size)
        return sum;
    else
    {
        sum += arr[i];
        return getSum(arr, sum, i + 1, size);
    }
}

int main()
{
    int T;
    cin >> T;
    ll arr[T];

    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }

    cout << getSum(arr, arr[0], 1, T);
}