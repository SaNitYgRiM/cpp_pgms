#include<iostream>
using namespace std;
 
int main()
{
    int i=0,n=0;
    cout<<"enter a num: ";
    cin>>n;
    i=n;
    while(i>0){
        int j=0;
        while(j<=n-i){
            cout<<char('A'+i+j-1)<<" ";
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}