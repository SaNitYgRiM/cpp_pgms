#include<iostream>
using namespace std;
 
int main()
{

    int n=0,i=0;
    cout<<"enter a num:";
    cin>>n;
    
    while(i<n){
        int j=0;
        int space=i;
        while(space){
            cout<<"  ";
            space--;
        }
        while(j<n-i){
            cout<<"*"<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}