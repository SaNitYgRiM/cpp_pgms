#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    unsigned int n=0;
    cout<<"enter a  num:";
    cin>>n;
    bool bit;
    int i=0;
    unsigned int ans=0;
    while(n!=0){
        bit=(n&1);
        //bit=~bit;
        ans+=~bit*pow(10,i);
        i++;
        n=n>>1;
    }
    //ans+=1;
    
    cout<<"Binary form:="<<ans;
 
    return 0;
}