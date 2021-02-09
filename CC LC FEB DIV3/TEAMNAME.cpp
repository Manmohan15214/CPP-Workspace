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
        unordered_set<string> words;
        while (n--)
        {
            string str;
            cin >> str;
            words.insert(str);
        }

        int count = 0;

        for (auto it = words.begin(); it != words.end(); ++it)
        {

            for (auto it2 = next(it); it2 != words.end(); it2++)
            {
                char f1 = it->front();
                char f2 = it2->front();
                string rem1 = it->substr(1, it->size());
                string rem2 = it2->substr(1, it2->size());

                if ((f1 == f2) || (rem1 == rem2))
                {
                    continue;
                }
                else
                {
                    if (words.find(f1 + rem2) == words.end() && words.find(f2 + rem1) == words.end())
                    {
                        count += 2;
                    }
                }
            }
        }

        cout << count << "\n";
    }
}