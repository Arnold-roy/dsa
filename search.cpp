#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int element;
cin>>element;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i]; 
}
for (int  i = 0; i < n; i++)
{
    if(element==arr[i]){
       cout<<i<<endl;
       break;
    }
}

return 0;


}