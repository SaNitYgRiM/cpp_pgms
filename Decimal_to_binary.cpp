#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    int n=0;
    cout<<"enter a  num:";
    cin>>n;
    int bit,i=0;
    while(n!=0){
        bit+=(n&1)*pow(10,i);
        i++;
        n=n>>1;
    }
    cout<<"Binary form:="<<bit;
    return 0;
}