#include<iostream>
using namespace std;
 
int main()
{
    int n=0,i=0;
    cout<<"enter a num:";
    cin>>n;
    while(i<n){
        int j=0;
        while(j<n-i){
            cout<<"  ";
            j++;
        }
        int star=i+1;
        while(star){
            cout<<"*"<<" ";
            star--;
        }
        cout<<endl;
        i++;
    }
 
    return 0;
}