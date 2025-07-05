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

    int position;
    int value;
    cin >> position >> value;
    int narr[n + 1];
    int j = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (i == position - 1)
        {
            narr[i] = value;
        }
        else
        {
            narr[i] = arr[j];
            j++;
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << narr[i] << "  ";
    }

    return 0;
}