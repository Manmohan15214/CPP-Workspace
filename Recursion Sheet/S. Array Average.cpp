//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#include <iterator>
using namespace std;
typedef long long ll;

float getSum(int arr[], int size, float sum = 0, int index = 0)
{
    if (index == size)
    {
        return sum;
    }
    else
    {
        return getSum(arr, size, sum + arr[index], index + 1);
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

    cout << fixed << setprecision(6) << getSum(arr, T) / T;
}