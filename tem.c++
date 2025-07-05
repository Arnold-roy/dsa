#include <bits/stdc++.h>
using namespace std;

int minium(int arr[5])
{
    int ele=arr[0];
    for (int i = 0; i < 5; i++)
    {      
        if (arr[i]<ele)
        {
            ele=arr[i];
        }
    }
    return ele;
}
int main()
{

    int arr[5] = {5, 4, 3, 4, 5};
    cout<<minium(arr);

    return 0;
} //let see