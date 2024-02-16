#include <iostream>
using namespace std;

int main(){

    int n=0;
    cout<<"enter a num:";
    cin>>n;
    int i=0;
    //char ch='A';
    while(i<n*3){
        
        int j=0;
        while(j<n)
        {  
          cout<<char('A'+i+j)<<" ";
          //ch++;
            j++;
        }
        cout<<endl;i=i+3;
    }
    
}