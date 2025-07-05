#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int num=n;
int armstrong =0;
  while (num!=0)
  {
    int temp=num%10;
    num/=10;
     armstrong += temp*temp*temp;
  }
  if(armstrong==n){
    cout<<"is a armstrong number"<<endl;
  }
  else{
    cout<<"not an armstrong number"<<endl;

  }
  return 0;
}