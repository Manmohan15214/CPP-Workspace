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
    if (!N)
        return;
    else
    {
        cout << "I love Recursion\n";
        recur(N - 1);
    }
}

int main()
{
    int T;
    cin >> T;
    recur(T);
}