#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << arr[i] << "  ";
            }
        }
    }
    cout<<endl;
    
    if (odd > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cout << arr[i] << " ";
            }
        }
        return 0;
    }
}