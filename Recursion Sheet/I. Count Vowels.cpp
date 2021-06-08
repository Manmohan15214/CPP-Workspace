//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <cctype>
using namespace std;
typedef long long ll;

int getVowelCount(string str, int i, int count)
{
    if (i == str.size())
        return count;
    char ch = tolower(str[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        count++;
    }
    return getVowelCount(str, i + 1, count);
}

int main()
{
    string str;
    getline(cin, str);
    cout << getVowelCount(str, 0, 0);
}