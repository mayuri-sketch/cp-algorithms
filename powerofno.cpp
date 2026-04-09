//use bit manipulation to evaluate if a number is a power 2.
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   if((n&(n-1))==0)
   {
    cout<<"num is power of two"<<endl;
   }
   else
   {
    cout<<"number is not a power of two"<<endl;
   }
}
//the main theory behind this concept is, for every number let's say, n. and it's binary is 110100
//then the n-1 will be 110011. because the concept here is basically this the last set bit
/* changes to 0 and all the zeros after it will be 1. now the power of two has only 1 set bit.*/