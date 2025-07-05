#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int j=1;j<=n;j++){
		for(int k=1;k<=j-1;k++){
			cout<<" ";
		}
	for(int i=1;i<=n;i++){
		cout<<"*";
	}
	cout<<endl;
	}
	return 0;
}
