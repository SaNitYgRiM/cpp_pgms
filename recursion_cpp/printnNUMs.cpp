#include<iostream>
using namespace std;
 void print(int n,int i){
    if(i>n)return;
    cout<<i;
    print(n,i+1);
 }
int main()
{
    int n;
    cout<<"enter num:";
    cin>>n;
    print(n,1);
 
    return 0;
}