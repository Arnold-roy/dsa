#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    float ans;
    if (n % 2 == 0)
    {
        ans = float((arr[n / 2]) + (arr[n / 2 - 1] / 2.0));
        cout << "median" << ans << endl;
    }
    else
    {
        ans = arr[n / 2];
        cout << "median" << ans << endl;
    }
    return 0;
    
}