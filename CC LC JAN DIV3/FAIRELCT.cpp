//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    int T, N, M;

    cin >> T;
    while (T--)
    {
        int sumA = 0, sumB = 0, count = 0;
        cin >> N >> M;
        int A[N], B[M];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            sumA += A[i];
        }
        for (int i = 0; i < M; i++)
        {
            cin >> B[i];
            sumB += B[i];
        }

        if (sumA <= sumB)
        {
            int start = 0, end = M - 1;
            int iter = min(N, M);
            sort(A, A + N);
            sort(B, B + M);

            while (iter--)
            {
                if (B[end] >= A[start])
                {
                    sumA += abs(B[end] - A[start]);
                    sumB -= abs(B[end] - A[start]);
                    count++;
                    if (sumA > sumB)
                    {
                        cout << count << endl;
                        break;
                    }
                }
                else
                    break;
                end--;
                start++;
            }
            if (sumA <= sumB && count >= 0)
                cout << -1 << endl;
        }
        else if (sumA > sumB)
        {
            cout << 0 << endl;
        }
    }
}