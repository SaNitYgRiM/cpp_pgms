#include<iostream>
using namespace std;
 void print(int n,int i){
    if(i<1)return;
    cout<<i;
    print(n,i-1);
 }
int main()
{
    int n;
    cout<<"enter num:";
    cin>>n;
    print(n,n);
 
    return 0;
}