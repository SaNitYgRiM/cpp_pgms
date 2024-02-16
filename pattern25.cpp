#include<iostream>
using namespace std;
 
int main()
{
    int i=1,n=0;
    cout<<"enter a num:";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int s=i-1;
        while(s){
            cout<<"*"<<" "<<"*"<<" ";
            s--;
        }

        int start=n-i+1;
        while(start){
            cout<<start--<<" ";
        }

        cout<<endl;
        i++;
    }
 
    return 0;
}