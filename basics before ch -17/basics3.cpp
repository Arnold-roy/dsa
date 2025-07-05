#include <bits/stdc++.h>
using namespace std;

int main() {
	int marks;
	cout<<"enter your marks"<<endl;
	cin>>marks;
     if(marks<33 && marks>=0){
		cout<<"fail"<<endl;

	 }
	 else if(marks>=33 && marks <=100){
		cout<<"Pass"<<endl;

	 }
	 else{
		cout<<"invalid marks ";
		
	 }
	return 0;
}
