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

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min<<endl;

    int sec_min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (sec_min > arr[i] && arr[i] != min)
        {
            sec_min = arr[i];
        }
    }
    cout << sec_min << endl;

    return 0;
}
