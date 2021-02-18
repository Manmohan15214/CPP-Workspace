//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <iterator>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        char last;
        unordered_set<char> ch;
        unordered_set<string> words;
        while (n--)
        {
            string str;
            cin >> str;
            ch.insert(str[0]);
            words.insert(str);
        }

        if (ch.size() == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            int count = 0;

            for (auto it = words.begin(); it != words.end(); ++it)
            {

                for (auto it2 = next(it); it2 != words.end(); it2++)
                {
                    string newS1 = *it;
                    string newS2 = *it2;
                    if (newS1[0] != newS2[0] && newS1.substr(1, newS1.size()) != newS2.substr(1, newS2.size()))
                    {
                        swap(newS1[0], newS2[0]);
                        if (words.find(newS1) == words.end() && words.find(newS2) == words.end())
                        {
                            count += 2;
                        }
                    }
                }
            }

            cout << count << "\n";
        }
    }
}