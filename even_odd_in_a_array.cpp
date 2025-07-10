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
    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }
    cout << "even numbers : " << endl;
    for (int i = 0; i < even.size(); i++)
    {

        cout << even[i] << endl;
    }

    cout << endl;
    cout << "odd numbers : " << endl;
    for (int i = 0; i < odd.size(); i++)
    {

        cout << odd[i] << endl;
    }

    return 0;
}