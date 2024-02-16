#include<iostream>
using namespace std;

int main(){
    int i=0,n=0;
    cout<<"enter a num:";
    cin>>n; 
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<char('A'+i)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }



}