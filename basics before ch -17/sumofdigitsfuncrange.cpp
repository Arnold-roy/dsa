#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int added=0;
    for (int i = 1; i <= n; i++)
    {
        added += i;
    }
    cout<<added;
}

int main()
{
    int n;
    cin >> n;
       sum(n);
    return 0;
}