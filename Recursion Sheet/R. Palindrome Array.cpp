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

bool isPalindrome(int arr[], int index, int size)
{
    if (index == size / 2)
    {
        if (arr[index] == arr[size - index])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (arr[index] == arr[size - index])
        {
            return isPalindrome(arr, index + 1, size);
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    int arr[T];

    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }

    if (isPalindrome(arr, 0, T - 1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}