#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
 
     //sub array 
     for (int i = 0; i < n; i++)
     {
        for (int j = i;j<n;j++)
        {
            for (int k = i; k <=j ; k++)
            {
                cout<<arr[k];
               

            }
             cout<<" ";
            
        }
        
     }
     
    return 0;

}