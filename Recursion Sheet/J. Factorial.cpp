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

ll getFact(int num, ll fact)
{
    if (num == 0)
        return fact;
    else
        return getFact(num - 1, fact * num);
}

int main()
{
    int T;
    cin >> T;
    cout << getFact(T, 1);
}