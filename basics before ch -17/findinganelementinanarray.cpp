#include<bits/stdc++.h>
using namespace std;

int finding_the_element(int element,int arr[10]){
    for(int i=0;i<10;i++){
        if(arr[i]==element)
            return i;
        
    }
    
}
int main()
{
    int element;
    int arr[10];
      cout<<"enter the element you want to find "<<endl;
      cin>>element;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int index=finding_the_element(element,arr);
    cout<<"the element is present in the index "<<index<<endl;
    cout<<"the element in that index is  : "<<arr[index]<<endl;

    return 0;

}