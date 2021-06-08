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

int getMax(int arr[], int maxNum, int i, int size)
{
    if (i == size)
        return maxNum;
    else
    {
        maxNum = max(maxNum, arr[i]);
        return getMax(arr, maxNum, i + 1, size);
    }
}

int main()
{
    int T;
    cin >> T;
    int arr[T];

    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }

    cout << getMax(arr, arr[0], 1, T);
}