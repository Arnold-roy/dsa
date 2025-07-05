#include<bits/stdc++.h>
using namespace std;

int main()
{ 
   string n1="123456";
   string n2="45";
   int num=stoi(n1);
   int num1=stoi(n2);
   cout<<num1+num<<endl;
   string no= to_string(num+num1);
   cout<<no<<endl;;
   reverse(no.begin(),no.end());
   cout<<no<<endl;




   return 0;
}