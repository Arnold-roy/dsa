#include <bits/stdc++.h>
using namespace std;

int sumofdigits(int n)
{
    int sum = 0;
    int lastdigit;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int sum;
    sum=sumofdigits(n);
    cout<<sum;
    return 0;
}