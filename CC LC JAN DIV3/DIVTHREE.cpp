//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    int T, N, K, D;

    cin >> T;
    while (T)
    {
        int sum = 0, temp;
        cin >> N >> K >> D;

        while (N--)
        {
            cin >> temp;
            sum += temp;
        }

        int totChall = sum / K;
        cout << min(totChall, D) << endl;

        T--;
    }
}