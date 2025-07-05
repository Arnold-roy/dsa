#include<bits/stdc++.h>
using namespace std;

int main()
{
   int number;
   int temp = 0;
   int add = 0;
    cin>>number;
    int count= 0;
     while (number!=0)
     {
       temp=number%10;
      number/=10;
      add+=temp;
        count++;  
     }
    cout<<count<<endl;
    cout<<add;

     return 0;
}