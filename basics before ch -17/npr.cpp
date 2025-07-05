#include <bits/stdc++.h>
using namespace std;
long factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int c = n - r;

    int nfact, cfact;
    nfact = factorial(n);

    cfact = factorial(c);

    cout << nfact / cfact << endl;
    return 0;
}