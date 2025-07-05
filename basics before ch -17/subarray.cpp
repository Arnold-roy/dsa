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
    for (int i = 0; i < n; i++) //0
    {
        for (int j = i; j < n; j++)//j=0
        {
            for (int k = i; k <= j; k++)//k=0,j=0
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;

    
}