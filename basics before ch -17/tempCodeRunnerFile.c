#include<bits/stdc++.h>
using namespace std;

void check(string &str){
    int l=0;
    int r=str.size()-1;
    while (l<=r){
        if(str[l]!=str[r])return cout<<"not a palindrome"<<endl;
        l++;
        r--;

    }
    cout<<"its a palindrome"<<endl;

}

int main()
{
    string str;
    cin>>str;
     check(str);
    return 0;

}