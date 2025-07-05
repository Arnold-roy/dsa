#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin>>num;
   int danger_num;
   cin>>danger_num;

	for(int i=1;i<=num;i++){
if(i==danger_num){
	break;
}

        else if (i%4==0 )
        {
          continue; 
        }
        
	else if((i%3==0) && (i%5==0)){
		cout<<"FIZZBUZZ"<<endl;
	}
	else if(i%3==0){
		cout<<"FIZZ"<<endl;

	}
	else if(i%5==0){
		cout<<"BUZZ"<<endl;

	}  
	else{
		cout<<i<<endl;

	}
	
	
}
return 0;
}