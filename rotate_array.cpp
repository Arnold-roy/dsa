#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    int arr[n];
    int reversedarr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    k = k % n;
    for (int i = 0; i < n; i++)
    {
        int newindex = i - k;

        if (newindex < 0)
        {
            newindex += n;
            
        }
        reversedarr[newindex] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << reversedarr[i];
    }

    return 0;
}