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
    int A, B, C;
    cin >> A >> B >> C;
    if (A == B || B == C || C == A)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}