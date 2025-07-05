#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][6];
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];

        }


    }
    int sum_of_row;
int sum_of_column;
    for(int i=0;i<4;i++){
        sum_of_row+=arr[i];
        for(int j=0;j<6;j++){
           sum_of_column+=arr[j];
        }
        cout<<endl;
        
    }
    
    return 0;

}