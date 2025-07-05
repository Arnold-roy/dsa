#include<bits/stdc++.h>
using namespace std;

string check(string &str){
    int l=0;
    int r=str.size()-1;
    while (l<=r){
        if(str[l]!=str[r])return "not a palindrome";
        l++;
        r--;

    }
    return "its a palindrome";

}

int main()
{
    string str;
    cin>>str;
    cout<< check(str);
    return 0;

}