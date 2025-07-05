#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    int index=-1;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            index = i;
            break;
        }
    }

    if (index!=-1)
    {
        cout << "element is present at" << index << endl;
    }
    else 
    {
        cout << "element is not present ";
    }
    return 0;
}
