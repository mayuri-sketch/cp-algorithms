//use bit manipulation to find if a nuumber is odd or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    if((n&(1))==1)
    {
        cout<<"number is odd"<<endl;
    }
    else
    {
        cout<<"number is even"<<endl;
    }
}