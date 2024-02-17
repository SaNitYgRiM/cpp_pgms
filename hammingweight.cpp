#include<iostream>
using namespace std;
    int hammingWeight(uint32_t n) {
       int c=0;
        while(n!=0){
            if(n&1)c++;
          n=n>>1;
        }
        cout<<c;
        return c;
    }
    int main(){
        unsigned int n;
        cout<<"enter num:";
        cin>>n;
        hammingWeight(n);

    }
