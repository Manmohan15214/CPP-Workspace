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
        recur(N / 2);
        cout << N % 2;
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
        recur(N);
        cout << "\n";
    }
}