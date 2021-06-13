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

int fib(int n, int a = 0, int b = 1)
{
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    return fib(n - 1, b, a + b);
}

int main()
{
    int T;
    cin >> T;
    cout << fib(T);
}
