#include<iostream>
using namespace std;
 
int main()
{
    int i=0,n=0;
    cout<<"enter a num: ";
    cin>>n;
    i=0;
    while(i<n){
        int j=0;
        char start='A'+i;
        while(j<n){
            cout<<start<<" ";
           start++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}