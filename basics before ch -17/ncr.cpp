#include<bits/stdc++.h>
using namespace std;

long factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
       
    }
     return fact;
}

int main(){
    int n,r;
    cin>>n>>r;
    int c=n-r;
int nfact;
int rfact;
int cfact;
     nfact=factorial(n);
   rfact= factorial(r);
    cfact= factorial(c);

 
  cout<<nfact/(rfact*cfact);


return 0;

}