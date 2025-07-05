#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
    
        }
        cout<<endl;
    }
for(int k=n-1;k>=1;k--){
    
    for(int p=1;p<=k;p++){
        cout<<p;
    }
    cout<<endl;
}

return 0;
}