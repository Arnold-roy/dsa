#include<bits/stdc++.h>
using namespace std;

int main()
{
   int range,n1=0,n2=1,n3=0;
   cin>>range;
   cout<<n1<<endl;
     cout  <<n2<<endl;
   for (int  i = 2; i <= range; i++)
   {
    n3=n1+n2;
    n1=n2;
    n2=n3;
    cout<<n3<<endl;
   }
   
   return 0;
   

}