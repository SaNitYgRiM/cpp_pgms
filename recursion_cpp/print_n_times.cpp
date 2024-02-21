#include<iostream>
using namespace std;
 void print(int n,string name,int count){
    if(count>n)return ;
    cout<<name;
    print(n,name,count+1);
 }
int main()
{   
    int n=0;
    string name;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter limit:";
    cin>>n;
    print(n,name,1);
    return 0;
}