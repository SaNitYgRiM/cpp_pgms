#include<iostream>
using namespace std;
 
int main()
{
    int i=1,n=0,j=1;
    cout<<"enter a num:";
    cin>>n;
    //int stopper=1;
    while(i<=n){
        
        int space=n-i;
        while(space){
            cout<<"  ";
            space--;
        }        
        j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        //stopper=j+1;
        int start=i-1;
        while(start){
            cout<<start--<<" ";
        }
        cout<<endl;
        i++;
    }
    return 0;
}