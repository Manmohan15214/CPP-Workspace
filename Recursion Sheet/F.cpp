#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
using namespace std;
typedef long long ll;

void recur(vector<int> arr, int index)
{
    if (index < arr.size())
    {
        recur(arr, index + 2);
        cout << arr[index] << " ";
    }
    return;
}

int main()
{
    int T;
    cin >> T;

    vector<int> arr;
    for (int i = 0; i < T; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    recur(arr, 0);
}