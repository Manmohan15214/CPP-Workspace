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
    while (T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int count = 0;

        for(int i=0;i<n-1;i++){

            int minVal= min(arr[i],arr[i+1]);
            int maxVal= max(arr[i],arr[i+1]);

            while(minVal*2 < maxVal){
                minVal=minVal*2;
                count++;
            }
        }

        cout<<count<<"\n";
    }
}