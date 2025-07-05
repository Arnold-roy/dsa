#include<bits/stdc++.h>
using namespace std;

void biggest_of_two_numbers(int a,int b){
    if(a>b ){
        cout<<"first term is the largest among the two numbers entered "<<endl;

    }
    else{
        cout<<"second term is the largest among the two numbers entered "<<endl;
    }
}


int main(){
   
int a,b;
cin>>a>>b;
   biggest_of_two_numbers(a,b);
return 0;

}