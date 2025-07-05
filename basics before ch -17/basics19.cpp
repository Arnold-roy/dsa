#include <bits/stdc++.h>
using namespace std;

int main()
{
    int binary;
    cin >> binary;
     int power=1;
     int sum=0;
     while (binary>0)
     {
        int lastdigit=binary%10;
        sum+=lastdigit*power;
        power=power*2;
        binary/=10;
     }
     cout<<sum<<endl;
     
    return 0;
}