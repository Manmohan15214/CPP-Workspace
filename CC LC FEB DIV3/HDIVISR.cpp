#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <iterator>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    for (int i = 10; i >= 1; i--)
    {
        if (T % i == 0)
        {
            cout << i;
            return 0;
        }
    }
}