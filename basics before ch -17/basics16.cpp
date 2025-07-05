#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int rever=0;
	int n_copy=n;

    while(n_copy!=0){
		int d= n_copy%10;
	     rever=rever*10+d;
		 n_copy/=10;
		}
		if(rever==n){
			cout<<"its palidrome number "<<endl;

		}
		else{
			cout<<"its not a palidrome number "<<endl;

		}

	return 0;
}
