/*
* The code below isnt accepted on Codeforces because of memory limit. (256 MB)   
*/

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

void getSum(vector<vector<int>> matA, vector<vector<int>> matB, int r, int c)
{
    if ((r == matA.size() - 1) && (c == matA[0].size() - 1))
    {
        cout << matA[r][c] + matB[r][c];
        return;
    }
    else
    {
        if (c == matA[0].size() - 1)
        {
            cout << matA[r][c] + matB[r][c] << endl;
            return getSum(matA, matB, r + 1, 0);
        }
        else
        {
            cout << matA[r][c] + matB[r][c] << " ";
            return getSum(matA, matB, r, c + 1);
        }
    }
}

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> matA(r, vector<int>(c, 0));
    vector<vector<int>> matB(r, vector<int>(c, 0));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int temp;
            cin >> temp;
            matA[i][j] = temp;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int temp;
            cin >> temp;
            matB[i][j] = temp;
        }
    }

    getSum(matA, matB, 0, 0);
}