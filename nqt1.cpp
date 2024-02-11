#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //nth term=a*r^n-1
    //even=> pow((1*3),n-1)
    //odd=> pow((1*2),n-1)
    int n;
    cout<<"enter a no.:";
    cin>>n;
   
     if(n%2==0){
    
        cout<<(int)(pow(3,(n/2)-1)+1e-9);
     }
     else{
    
         cout<<(int)(pow(2,(n/2))+1e-9);
         }
    return 0;
}