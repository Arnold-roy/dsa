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
    int min_elem = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_elem)
        {
            min_elem = arr[i];
        }
    }
    cout << min_elem << endl;
    int sec_min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < sec_min && arr[i] != min_elem)
        {
            sec_min = arr[i];
        }
    }
    cout << sec_min << endl;
    return 0;
}