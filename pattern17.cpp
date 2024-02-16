#include<iostream>
using namespace std;
 
int main()
{
    int i=0,n=0;
    cout<<"enter a num: ";
    cin>>n;
    char ch='A';
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
 
    return 0;
}