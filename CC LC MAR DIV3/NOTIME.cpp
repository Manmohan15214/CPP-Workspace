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
    int N, H, x;
    cin >> N >> H >> x;
    while (N--)
    {
        int temp;
        cin >> temp;
        if (temp + x >= H)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}