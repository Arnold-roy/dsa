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
    int answer = 0;
    if (n % 2 == 0)
    {
        answer = (arr[n / 2] + arr[n / 2] - 1) / 2;
    }
    else
    {
        answer = (arr[n / 2]);
    }
    cout << answer;
    return 0;
}