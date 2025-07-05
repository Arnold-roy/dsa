#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1="12345";
    string str2="13";

    int n1= stoi(str1);
    int n2=stoi(str2);

       string str3=to_string(n1+n2);
      
       reverse(str3.begin(),str3.end());
 cout<<str3;

    return 0;
}