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

void recur(int N)
{
    if (N)
    {
        recur(N / 10);
        cout << N % 10 << " ";
    }
    return;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (!N)
            cout << 0;
        else
            recur(N);
        cout << "\n";
    }
}