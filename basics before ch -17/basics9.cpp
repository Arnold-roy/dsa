#include <bits/stdc++.h>
using namespace std;

int main() {
	char ch;
	cin>>ch;
	 int value = ch;
if((value>=65 && value<=90) || (value>=97 && value<=122)){
	cout<<"alphabet";
}
else{
	cout<<"digit";
}
	return 0;
}
