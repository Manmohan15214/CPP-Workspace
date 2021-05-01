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
    if (N == 1)
        cout << 1;
    else
    {
        cout << N << " ";
        recur(N - 1);
    }
    return;
}

int main()
{
    int T;
    cin >> T;
    recur(T);
}