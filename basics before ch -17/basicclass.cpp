#include<bits/stdc++.h>
using namespace std;


class student
{      public:
    string name ;
    int age;
    int rollno;
    student(string n,int a,int r){
        name=n;
        age=a;rollno=r;
        

    }
    void printoutput(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;

    }
};
int main()
{
    student st1=student("arnold",20,9);
   st1.printoutput();
    return 0;
}